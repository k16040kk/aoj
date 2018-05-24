//
//  main.c
//  rectangle
//
//  Created by k16040kk on 2018/05/19.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int b;
    int s;
    int ss;
    
    scanf("%d %d",&a,&b);
    
    if(1<=a&&b<=100){
        s=a*b;
        ss=a*2+b*2;
        printf("%d %d\n",s,ss);
    }else{
        printf("inputが範囲外の数字です．\n");
    }
    return 0;
}
