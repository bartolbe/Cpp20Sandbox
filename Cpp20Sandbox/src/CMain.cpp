//
//  CMain.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#include "CMain.hpp"

#include "CFunctions14.hpp"
#include "CLambdas14.hpp"
#include "CNumbers14.hpp"
#include "CObjects14.hpp"

void CMain::Execute()
{
    static const std::unique_ptr<IBlock> s_blocks[] = {
        std::make_unique<CFunctions14>(),
        std::make_unique<CLambdas14>(),
        std::make_unique<CNumbers14>(),
        std::make_unique<CObjects14>()
    };
    
    for (auto &block : s_blocks)
    {
        block->Execute();
    }
}
