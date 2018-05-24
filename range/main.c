//
//  main.c
//  range
//
//  Created by k16040kk on 2018/05/19.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    if(0<=a&&0<=b&&0<=c&&a<=100&&b<=100&&c<=100){
        if(a<b && b<c){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        printf("inputが範囲外の数字です．");
    }
    return 0;
}
