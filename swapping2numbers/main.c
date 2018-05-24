//
//  main.c
//  swapping2numbers
//
//  Created by k16040kk on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y;
    int tmp;
    int count=0;

    scanf("%d %d",&x,&y);
    while(x!=0&&y!=0){
        count++;
        if(count<3000){
            if(0<=x&&0<=y&&x<=10000&&y<=10000){
                if(x>y){
                    tmp=x;
                    x=y;
                    y=tmp;
                }
            }else{
                printf("input error");
                break;
            }
            printf("%d %d\n",x,y);
            scanf("%d %d",&x,&y);
        }else{
            break;
        }
    }
    return 0;
}
