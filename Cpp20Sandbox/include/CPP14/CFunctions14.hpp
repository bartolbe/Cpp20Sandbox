//
//  CFunctions14.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CFunctions14_hpp
#define CFunctions14_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CFunctions14 : public IBlock
{
public:
    virtual ~CFunctions14() = default;
    
    virtual void Execute() override;
    
private:
    auto MemberFunction();
};

#endif /* CFunctions14_hpp */
