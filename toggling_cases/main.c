//
//  main.c
//  toggling_cases
//
//  Created by k16040kk on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include<stdio.h>
#include<string.h>

int main(void){
    
    int i;
    char str[1200];
    
    fgets(str,1200,stdin);
    /* アルファベットの小文字を大文字に変換 */
    for(i=0;i<=strlen(str);i++){
        /* アルファベットの小文字なら変換 */
        if(str[i]>=97&&str[i]<=122){
            str[i]=str[i]-32;
        }
        else if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
        
    }
    /* 変換した文字列を出力 */
    printf("%s", str);
    
    return 0;
}
