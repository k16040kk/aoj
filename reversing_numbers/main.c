//
//  main.c
//  reversing_numbers
//
//  Created by k16040kk on 2018/05/25.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,a[1000]={};
    
    scanf("%d",&num);
    
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    for(int i=num;i>0;i--){
        printf("%d",a[i-1]);
        if(i-1!=0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
