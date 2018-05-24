//
//  main.c
//  sort3number
//
//  Created by k16040kk on 2018/05/19.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c,tmp;
    scanf("%d %d %d",&a,&b,&c);
    if(1<=a&&1<=b&&1<=c&&a<=10000&&b<=10000&&c<=10000){
        if(a>b){
            tmp=a;
            a=b;
            b=tmp;
            if(b>c){
                tmp=b;
                b=c;
                c=tmp;
                if(a>b){
                    tmp=a;
                    a=b;
                    b=tmp;
                }
            }
        }else if(b>c){
            tmp=b;
            b=c;
            c=tmp;
            if(a>b){
                tmp=a;
                a=b;
                b=tmp;
            }
        }
    }else{
        printf("inputが範囲外の数字です．");
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
