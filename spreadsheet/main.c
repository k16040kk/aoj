//
//  main.c
//  spreadsheet
//
//  Created by k16040kk on 2018/05/27.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,num2;
    int array[100][100]={0};
    scanf("%d %d",&num,&num2);
    
    for(int i=0;i<num;i++){
        for(int j=0;j<num2;j++){
            scanf("%d",&array[i][j]);
            array[i][num2]+=array[i][j];
            array[num][num2]+=array[i][j];
        }
    }
    for(int i=0;i<num2;i++){
        for(int j=0;j<num;j++){
            array[num][i]+=array[j][i];
        }
    }
    for(int i=0;i<num+1;i++){
        for(int j=0;j<num2+1;j++){
            printf("%d",array[i][j]);
            if(j!=num2){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
