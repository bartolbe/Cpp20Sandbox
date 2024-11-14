//
//  CLambdas14.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-13.
//

#ifndef CLambdas14_hpp
#define CLambdas14_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CLambdas14 : public IBlock
{
public:
    virtual ~CLambdas14() = default;
    
    virtual void Execute() override;
};

#endif /* CLambdas14_hpp */
