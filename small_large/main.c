//
//  main.c
//  small_large
//
//  Created by k16040kk on 2018/05/19.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int b;
    
    scanf("%d %d",&a,&b);
    if(-1000<=a && b<=1000){
        if(a<b){
            printf("a < b\n");
        }else if(b<a){
            printf("a > b\n");
        }else{
            printf("a == b\n");
        }
    }
    
    return 0;
}
