//
//  main.c
//  sum_of_numbers
//
//  Created by k16040kk on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    while(1){
        char x[1001]={0};
        int sum=0;
        scanf("%s",x);
        
        for(int i=0;i<strlen(x);i++){
            sum+=x[i]-'0';
        }
        if(sum==0)break;
        printf("%d\n",sum);
    }
    return 0;
}
