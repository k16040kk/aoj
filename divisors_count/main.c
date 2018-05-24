//
//  main.c
//  divisors_count
//
//  Created by k16040kk on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    int count=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        exit(0);
    }
    
    for(int i=0;i<b-a+1;i++){
        
        if(c%(a+i)==0)count++;
        
    }
    printf("%d\n",count);
    return 0;
}
