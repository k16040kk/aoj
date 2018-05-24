//
//  main.c
//  watch
//
//  Created by k16040kk on 2018/05/19.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int S;
    int h;
    int m;
    int s;
    
    scanf("%d",&S);
    
    if(0<=S && S<86400){
        h=S/3600;
        m=S%3600/60;
        s=S%3600%60;
        printf("%d:%d:%d\n",h,m,s);
    }else{
        printf("inputが範囲外の数字です．");
    }
    return 0;
}
