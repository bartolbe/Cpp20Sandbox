//
//  CFunctions.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CFunctions_hpp
#define CFunctions_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CFunctions : public IBlock
{
public:
    virtual ~CFunctions() = default;
    
    virtual void Execute() override;
    
private:
    auto MemberFunction();
};

#endif /* CFunctions_hpp */
