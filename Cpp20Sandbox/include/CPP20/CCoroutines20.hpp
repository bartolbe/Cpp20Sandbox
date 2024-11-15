//
//  CCoroutines20.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CCoroutines20_hpp
#define CCoroutines20_hpp

#include "IBlock.hpp"

#include <coroutine>
#include <stdio.h>

class CCoroutines20 : public IBlock
{
public:
    virtual ~CCoroutines20() = default;
    
    virtual void Execute() override;
    
private:
    struct ReturnObject
    {
        struct promise_type
        {
            ReturnObject get_return_object() { return {}; }
            std::suspend_never initial_suspend() { return {}; }
            std::suspend_never final_suspend() noexcept { return {}; }
            void unhandled_exception() {}
        };
    };

    struct Awaiter
    {
        std::coroutine_handle<> *hp_;
        
        // Whether the coroutine should suspend.
        constexpr bool await_ready() const noexcept { return false; }
        void await_suspend(std::coroutine_handle<> h) { *hp_ = h; }
        constexpr void await_resume() const noexcept {}
    };

    ReturnObject CoroutineTest(int32_t initialVavlue, std::coroutine_handle<> *continuation_out);
};

#endif /* CCoroutines20 */
