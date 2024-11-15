//
//  CCoroutines20.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#include "CCoroutines20.hpp"

CCoroutines20::ReturnObject CCoroutines20::CoroutineTest(int32_t initialVavlue, std::coroutine_handle<> *continuation_out)
{
    Awaiter awaiter{continuation_out};
    for (int32_t i = initialVavlue;; ++i)
    {
        co_await awaiter;
        printf("  CoroutineTest: initial: %d, current: %d\n", initialVavlue, i);
    }
}

void CCoroutines20::Execute()
{
    static const int32_t intialValue = 7;
    std::coroutine_handle<> handle;
    
    CoroutineTest(intialValue, &handle);
    
    for (int i = 0; i < 3; ++i)
    {
        printf("Execute %d\n", i);
        handle();
    }
    handle.destroy();
}
