//
//  CMain.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#include "CMain.hpp"

#include "CBinaryLiteral.hpp"

void CMain::Execute()
{
    static const std::unique_ptr<IBlock> s_blocks[] = {
        std::make_unique<CBinaryLiteral>()
    };
    
    for (auto &block : s_blocks)
    {
        block->Execute();
    }
}
