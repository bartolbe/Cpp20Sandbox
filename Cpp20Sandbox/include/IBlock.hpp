//
//  IBlock.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef IBlock_hpp
#define IBlock_hpp

#include <stdio.h>

class IBlock
{
public:
    virtual ~IBlock() = default;
    
    virtual void Execute() = 0;
};

#endif /* IBlock_hpp */
