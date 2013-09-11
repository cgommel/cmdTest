//
//  main.c
//  cmdTest
//
//  Created by Christoph Gommel on 11.09.13.
//  Copyright (c) 2013 Christoph Gommel. All rights reserved.
//

#include <stdio.h>
#include "add.h"
#include "multiply.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    printf("Hey, I am on github!\n");
    printf("1+1 = %d\n",add(1,1));
    printf("2*3 = %d\n",multiply(2,3));
    
    return 0;
}

