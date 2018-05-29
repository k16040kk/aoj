//
//  main.c
//  ring
//
//  Created by k16040kk on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(void){
    char s[101],p[101];
    int i,j,sn=0,pn=0,t;
    
    scanf("%s %s",s,p);
    
    //文字数カウント
    while(s[sn] != '\0') sn++;
    while(p[pn] != '\0') pn++;
    
    for(i=0;i<sn;i++){
        t=1;
        for(j=0;j<pn;j++)
            if(s[(i+j)%sn] != p[j]) t=0;
        if(t) break;
    }
    
    if( t )
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}
