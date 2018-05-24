//
//  main.c
//  X cubic
//
//  Created by k16040kk on 2018/05/19.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    int result;
    
    scanf("%d",&x);
    
    if(x>=1 && x<=100){
        result=x*x*x;
        printf("%d\n",result);
    }
    else{
        printf("1<=x<=100の範囲の数字ではありません．");
    }
    return 0;
}
