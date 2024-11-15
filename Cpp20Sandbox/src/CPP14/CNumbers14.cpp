//
//  CBinaryLiteral.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#include "CNumbers14.hpp"

void CNumbers14::Execute()
{
    printf("=== Numbers ===\n");
    
    // Binary literals.
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
    
    // Digit Separators.
    printf("  1'234'567 is probably 1234567:\n");
    check = 1'234'567;
    if (check == 1234567)
    {
        printf("    Yes it is.\n");
    }
    else
    {
        printf("    No it's %d\n", check);
    }
}
