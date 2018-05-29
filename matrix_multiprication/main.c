//
//  main.c
//  matrix_multiprication
//
//  Created by k16040kk on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int aa,bb,cc;
    int a[100][100]={0};
    int b[100][100]={0};
    long c[100][100]={0};
    scanf("%d %d %d",&aa,&bb,&cc);
    
    for(int i=0;i<aa;i++){
        for(int j=0;j<bb;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<bb;i++){
        for(int j=0;j<cc;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i=0;i<aa;i++){
        for(int j=0;j<cc;j++){
            for(int k=0;k<bb;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<aa;i++){
        for(int j=0;j<cc;j++){
            printf("%ld",c[i][j]);
            if(j!=cc-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
