//
//  main.c
//  structured_programing
//
//  Created by k16040kk on 2018/05/25.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,x,y=0;
    
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        x=i;
        if(x>300&&x<=400){
            x=x/100;
        }
        else if(x>=3000&&x<4000){
            x=x/1000;
        }
        else if(x>=1000&&x<=10000){
            y=i;
            y=y/10;
            if(x>=4000||x<3000){
                x=x/100;
            }
        }
        else{
            x=x/10;
        }

        if(i%3==0){
            printf(" %d",i);
        }else if(x%10==3||i%10==3){
            printf(" %d",i);
        }else if(y%10==3){
            printf(" %d",i);
        }
    }
    printf("\n");
    return 0;
}
