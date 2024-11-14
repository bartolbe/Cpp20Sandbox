//
//  CNumbers14.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CNumbers14_hpp
#define CNumbers14_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CNumbers14 : public IBlock
{
public:
    virtual ~CNumbers14() = default;
    
    virtual void Execute() override;
};

#endif /* CNumbers14_hpp */
