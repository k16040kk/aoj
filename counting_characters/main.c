//
//  main.c
//  counting_characters
//
//  Created by k16040kk on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    
    int al[30] = {0};
    char bun[2000]= {0};
    int i,j,n;
    
    i=0;
    
    while( scanf("%c",&bun[i]) != EOF) {
        if(bun[i]>='A'&&'Z'>=bun[i]){
            n=bun[i]-'A';
            al[n]+=1;
        }else if(bun[i]>='a'&&bun[i]<='z') {
            n=bun[i]-'a';
            al[n]+= 1;
        }
        i++;
    }
    
    for(j=97;j<=122;j++) {
        n=j-'a';
        printf("%c : %d\n",j,al[n]);
    }
    
    return 0;
    
}
