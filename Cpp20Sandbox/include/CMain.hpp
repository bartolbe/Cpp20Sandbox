//
//  CMain.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CMain_hpp
#define CMain_hpp

#include <iostream>
#include <stdio.h>

#include "IBlock.hpp"

class CMain : public IBlock
{
public:
    virtual ~CMain() = default;
    
    virtual void Execute() override;
};


#endif /* CMain_hpp */
