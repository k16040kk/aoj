//
//  main.c
//  matrix_vector_multiplication
//
//  Created by k16040kk on 2018/05/27.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tate,yoko;
    int num,num2;
    int array[100][100]={0};
    int array2[100]={0};
    int ans[100]={0};
    scanf("%d %d",&tate,&yoko);
    
    for(int i=0;i<tate;i++){
        for(int j=0;j<yoko;j++){
            scanf("%d",&num);
            array[i][j]=num;
        }
    }
    for(int i=0;i<yoko;i++){
        scanf("%d",&num2);
        array2[i]=num2;
    }
    for(int i=0;i<tate;i++){
        for(int j=0;j<yoko;j++){
            ans[i]+=array[i][j]*array2[j];
        }
    }
    
    
    for(int i=0;i<tate;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
