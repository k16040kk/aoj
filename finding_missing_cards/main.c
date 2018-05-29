//
//  main.c
//  finding_missing_cards
//
//  Created by k16040kk on 2018/05/25.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,n,i,j,array[4][13];
    char check='c';
    for(int i=0;i<4;i++){
        for(j=0;j<13;j++){
            array[i][j]=0;
        }
    }
    scanf("%d",&n);
    
    for(i=0;i<2*n;i++){
        scanf("%c %d",&check,&num);
        if(check=='S'){
            array[0][num-1]=1;
        }else if(check=='H'){
            array[1][num-1]=1;
        }else if(check=='C'){
            array[2][num-1]=1;
        }else if(check=='D'){
            array[3][num-1]=1;
        }
    }
    for(j=1;j<=13;j++){
        if(array[0][j-1]!=1){
            printf("S %d\n",j);
        }
    }
    for(j=1;j<=13;j++){
        if(array[1][j-1]!=1){
            printf("H %d\n",j);
        }
    }
    for(j=1;j<=13;j++){
        if(array[2][j-1]!=1){
            printf("C %d\n",j);
        }
    }
    for(j=1;j<=13;j++){
        if(array[3][j-1]!=1){
            printf("D %d\n",j);
        }
    }
    return 0;
}
