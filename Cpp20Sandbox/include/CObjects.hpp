//
//  CObjects.hpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#ifndef CObjects_hpp
#define CObjects_hpp

#include "IBlock.hpp"

#include <stdio.h>

class CObjects : public IBlock
{
public:
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
    
    virtual ~CObjects() = default;
    
    virtual void Execute() override;
};

#endif /* CObjects_hpp */