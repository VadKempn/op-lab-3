//
// Created by user on 15.10.2022.
//

#include <stdio.h>

int lab3 () {
    int numb1;
    int numb2;
    scanf("%o", &numb1);
    printf("%d\n", numb1);
    printf("%x\n", numb1);
    printf("%x\n", numb1 >> 4);
    printf("%x\n", ~numb1);
    scanf("%x", &numb2);
    printf("%x and %x-%x\n", numb1, numb2, numb1 & numb2);
    return 0;
    }

