//
//  main.c
//  official_house
//
//  Created by k16040kk on 2018/05/27.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,n,j,tate,yoko;
    int a[3][10],b[3][10],c[3][10],d[3][10];
    int check=0;
    for(int i=0;i<3;i++){
        for(j=0;j<10;j++){
            a[i][j]=0;
            b[i][j]=0;
            c[i][j]=0;
            d[i][j]=0;
        }
    }
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&check,&tate,&yoko,&num);
        if(check==1){
            a[tate-1][yoko-1]+=num;
        }else if(check==2){
            b[tate-1][yoko-1]+=num;
        }else if(check==3){
            c[tate-1][yoko-1]+=num;
        }else if(check==4){
            d[tate-1][yoko-1]+=num;
        }
    }
    for(int i=0;i<3;i++){
        for(j=0;j<10;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("####################\n");
    for(int i=0;i<3;i++){
        for(j=0;j<10;j++){
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("####################\n");
    for(int i=0;i<3;i++){
        for(j=0;j<10;j++){
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    printf("####################\n");
    for(int i=0;i<3;i++){
        for(j=0;j<10;j++){
            printf(" %d",d[i][j]);
        }
        printf("\n");
    }
        return 0;
}
