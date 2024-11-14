//
//  CObjects14.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CObjects14_hpp
#define CObjects14_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CObjects14 : public IBlock
{
public:
    virtual ~CObjects14() = default;
    
    virtual void Execute() override;
    
private:
    struct Parent
    {
        struct Child
        {
            int c1;
            int c2;
            int c3;
        };
        
        int p1;
        Child child;
        int p2;
    };
};

#endif /* CObjects14_hpp */
