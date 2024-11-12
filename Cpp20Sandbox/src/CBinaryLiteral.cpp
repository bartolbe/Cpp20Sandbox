//
//  CBinaryLiteral.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#include "CBinaryLiteral.hpp"

void CBinaryLiteral::Execute()
{
    printf("=== Binary Literals ===\n");
    printf("  0b101 is probably 5:\n");
    int check = 0b101;
    if (check == 5)
    {
        printf("    Yes it is.\n");
    }
    else
    {
        printf("    No it's %d\n", check);
    }
}
