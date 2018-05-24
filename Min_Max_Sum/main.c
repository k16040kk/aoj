//
//  main.c
//  Min_Max_Sum
//
//  Created by k16040kk on 2018/05/23.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,num,min=1000000,max=-1000000;
    long sum=0;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        sum+=num;
        if(min>num){
            min=num;
        }
        if(max<num){
            max=num;
        }
    }
    printf("%d %d %ld\n",min,max,sum);
    return 0;
}
