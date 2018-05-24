//
//  main.c
//  swapping2numbers1.5
//
//  Created by k16040kk on 2018/05/21.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(){
    int x, y;
    while(1){
        scanf("%d %d", &x, &y);
        if(x==0 && y==0)break;
        if(x<y){
            printf("%d %d\n", x, y);
        }else{
            printf("%d %d\n", y, x);
        }
    }
    return 0;
}
