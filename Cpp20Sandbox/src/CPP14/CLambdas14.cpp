//
//  CLambdas14.cpp
//  Cpp20Sandbox
//
//  Created by Joey Pape on 2024-11-13.
//

#include "CLambdas14.hpp"

void CLambdas14::Execute()
{
    printf("=== Lambdas ===\n");
    
    static auto s_genericEqualityLambda = [](auto v1, auto v2, bool *pResult) {
        *pResult = (v1 == v2);
    };
    
    int i1 = 1;
    int i2 = 2;
    bool result = false;
    
    s_genericEqualityLambda(i1, i2, &result);
    printf("  Generic lambda found integers %s\n", result ? "equal (wrong)" : "unequal (correct)");
    
    int *pI1 = &i1;
    int *pI2 = &i1; // same
    
    s_genericEqualityLambda(pI1, pI2, &result);
    printf("  Generic lambda found pointers %s\n", result ? "equal (correct)" : "unequal (wrong)");
}
