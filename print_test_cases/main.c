//
//  main.c
//  print_test_cases
//
//  Created by k16040kk on 2018/05/20.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int num[10000]={};
    int count=0;
    
    for(int i=0;i<9999;i++){
        scanf("%d",&num[i]);
        count++;
        if(num[i]==0) break;
    }
    
    for(int i=0;i<count-1;i++){
        printf("Case %d: %d\n",i+1,num[i]);
    }
    
    
    return 0;
}
