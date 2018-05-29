//
//  main.c
//  how_many_ways
//
//  Created by k16040kk on 2018/05/27.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,x,i,j,k,ans=0;
    while(1){
        scanf("%d %d",&n,&x);
        if(n==0&x==0)break;
        for(i=0;i<n-1;i++){
            for(j=i+1;i<n;j++){
                for(k=j+1;i<n+1;k++){
                    if((i+j+k)==x)ans++;
                }
            }
        }
        printf("%d",ans);
    }
    return 0;
}
