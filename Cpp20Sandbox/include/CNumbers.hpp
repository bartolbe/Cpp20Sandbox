//
//  CNumbers.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CNumbers_hpp
#define CNumbers_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CNumbers : public IBlock
{
public:
    virtual ~CNumbers() = default;
    
    virtual void Execute() override;
};

#endif /* CNumbers_hpp */
