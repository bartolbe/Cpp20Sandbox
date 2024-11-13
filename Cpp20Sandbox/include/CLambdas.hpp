//
//  CLambdas.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-13.
//

#ifndef CLambdas_hpp
#define CLambdas_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CLambdas : public IBlock
{
public:
    virtual ~CLambdas() = default;
    
    virtual void Execute() override;
};

#endif /* CLambdas_hpp */
