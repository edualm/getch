//
//  main.cpp
//  getch
//
//  Created by Eduardo Almeida on 22/05/13.
//  Copyright (c) 2013 Bitten Apps. All rights reserved.
//

#include <stdio.h>

#include "getch.h"

int main() {
    while (1)
        printf("getch() ASCII Code: %d\n", getch());
    
    return 0;
}

