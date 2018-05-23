//
//  main.c
//  print_rec
//
//  Created by k16040kk on 2018/05/23.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    while(a!=0&&b!=0){
        for(int i=0;i<a;i++){
            for(int i=0;i<b;i++){
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d %d",&a,&b);

    }
    
    return 0;
}
