w//
//  main.c
//  circle_in_rectangle
//
//  Created by k16040kk on 2018/05/19.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int w,h,x,y,r;
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    if(x>0 && y>0){
        if(w>=x+r && h>=y+r){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        printf("No\n");
    }
    
    return 0;
}
