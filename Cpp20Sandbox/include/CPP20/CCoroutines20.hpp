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
            ReturnObject get_return_object()
            {
                return { std::coroutine_handle<promise_type>::from_promise(*this) };
            };

            std::suspend_never initial_suspend() { return {}; }
            std::suspend_never final_suspend() noexcept { return {}; }
            void unhandled_exception() {}
        };
        
        std::coroutine_handle<promise_type> handle;
    };

    // No need for a specialized awaiter with the handle stored in the return object.
    /*struct Awaiter
    {
        // Returns whether the coroutine should suspend.
        constexpr bool await_ready() const noexcept { return false; }
        void await_suspend(std::coroutine_handle<> h) {}
        constexpr void await_resume() const noexcept {}
    };*/

    ReturnObject CoroutineTest(int32_t initialVavlue);
};

#endif /* CCoroutines20 */
