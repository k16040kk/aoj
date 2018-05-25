//
//  main.c
//  print_chessboard
//
//  Created by k16040kk on 2018/05/25.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    while(a!=0&&b!=0){
        for(int i=0;i<a;i++){
            if(i%2==0){
                for(int j=0;j<b;j++){
                    if(j%2==0){
                        printf("#");
                    }
                    else{
                        printf(".");
                    }
                }
            }else{
                for(int j=0;j<b;j++){
                    if(j%2==0){
                        printf(".");
                    }
                    else{
                        printf("#");
                    }
                }
            }
           
            printf("\n");
        }
        printf("\n");
        scanf("%d %d",&a,&b);
        
    }
    
    return 0;
}
