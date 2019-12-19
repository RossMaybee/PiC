//
//  main.c
//  Ch3
//
//  Created by Ross Maybee on 4/9/19.
//  Copyright © 2019 Maybee Ventures Corporation. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Basic Data Types
    
    /*
    int     integerVar = 100;
    float   floatingVar = 331.79;
    double  doubleVar = 8.44e+11;
    char    charVar = 'W';
    
    _Bool   boolVar = 0;
    
    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    
    printf("boolVar = %i\n", boolVar);
    */
    
    // Using Arithmetic Operators
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;
    
    result = a - b;     //subtraction
    printf("a - b = %i\n", result);
    
    result = b * c;     //multiplication
    printf("b * c = %i\n", result);
    
    result = a / c;     //division
    printf("a / c = %i\n", result);
    
    result = a + b * c; //precedence
    printf("a + b * c = %i\n", result);
    
    printf("a * b + c * d = %i\n", a * b + c * d);
    
    return 0;
}
