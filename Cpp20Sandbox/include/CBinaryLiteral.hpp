//
//  CBinaryLiteral.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CBinaryLiteral_hpp
#define CBinaryLiteral_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CBinaryLiteral : public IBlock
{
public:
    virtual ~CBinaryLiteral() = default;
    
    virtual void Execute() override;
};

#endif /* CBinaryLiteral_hpp */
