//
//  CFunctions.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#include "CFunctions.hpp"

static auto StaticFunction()
{
    return false;
}

auto CFunctions::MemberFunction()
{
    return true;
}

void CFunctions::Execute()
{
    printf("=== Functions ===\n");
    if (MemberFunction())
    {
        printf("  Auto detected member function type.\n");
    }
    
    if (!StaticFunction())
    {
        printf("  Auto detected static function type.\n");        
    }
}
