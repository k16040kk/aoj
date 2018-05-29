//
//  main.c
//  transformation
//
//  Created by k16040kk on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

void print(char str[],int a,int b){
    for(int i=a;i<b+1;i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

void reverse(char str[],int a,int b){
    char str2[1001];
    for(int i=0;i<b-a+1;i++){
        str2[a+i]=str[b-i];
    }
    for(int i=a;i<b+1;i++){
        str[i]=str2[i];
    }
}

void replace(char str[],int a,int b,char p[]){
    for(int i=0;i<b-a+1;i++){
        str[a+i]=p[i];
    }
}

int main(int argc, const char * argv[]) {
    char str[1000],p[1001];
    char s[10];
    int q,a,b;
    scanf("%s",str);
    
    scanf("%d",&q);
    
    for(int i=0;i<q;i++){
        scanf("%s",s);
        if(strcmp(s,"print")==0){
            scanf("%d %d",&a,&b);
            print(str,a,b);
        }else if(strcmp(s,"reverse")==0){
            scanf("%d %d",&a,&b);
            reverse(str,a,b);
        }else if(strcmp(s,"replace")==0){
            scanf("%d %d %s",&a,&b,p);
            replace(str,a,b,p);
        }
    }
    return 0;
}
