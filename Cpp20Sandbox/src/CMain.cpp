//
//  CMain.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#include "CMain.hpp"

#include "CFunctions.hpp"
#include "CLambdas.hpp"
#include "CNumbers.hpp"
#include "CObjects.hpp"

void CMain::Execute()
{
    static const std::unique_ptr<IBlock> s_blocks[] = {
        std::make_unique<CFunctions>(),
        std::make_unique<CLambdas>(),
        std::make_unique<CNumbers>(),
        std::make_unique<CObjects>()
    };
    
    for (auto &block : s_blocks)
    {
        block->Execute();
    }
}
