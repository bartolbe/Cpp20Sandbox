//
//  CObjects.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-12.
//

#include "CObjects.hpp"

void CObjects::Execute()
{
    Parent parent = {1, {2, 3, 4}, 5};
    
    bool ok = parent.p1 == 1 && parent.child.c1 == 2 && parent.child.c2 == 3 && parent.child.c3 == 4 && parent.p2 == 5;
    
    printf("=== Objects ===\n");
    printf("  Aggregate member initialization\n");
    if (ok)
    {
        printf("    It works!\n");
    }
    else
    {
        printf("    It doesn't work: p1=%d, c1=%d, c2=%d, c3=%d, p2=%d\n", parent.p1, parent.child.c1, parent.child.c2, parent.child.c3, parent.p2);
    }
}
