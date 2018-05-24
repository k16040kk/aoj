//
//  main.c
//  print_test_cases1.5
//
//  Created by k16040kk on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=1, x;
    
    scanf("%d", &x);
    while (x != 0) {
        printf("Case %d: %d\n", i, x);
        i++;
        scanf("%d", &x);
    }
    
    return 0;
}
