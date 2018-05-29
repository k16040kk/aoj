//
//  main.c
//  finding_word
//
//  Created by k16040kk on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char w[1500];
    char str[1500];
    char *check="END_OF_TEXT";
    int count=0;
    
    scanf("%s",w);
    
    while (scanf("%s",str)) {
        if(strcmp(str,check)==0)break;
        for(int i = 0;i < strlen(str);i++){
            str[i] = 'A' <= str[i] && 'Z' >= str[i] ? str[i] - 'A' + 'a' : str[i];
            //?:三項演算子　?までが条件 ◯◯?△△:** 〇〇なら△△の処理〇〇じゃないなら**
        }
        if(strcmp(str, w) == 0) count++;
    }
    printf("%d\n",count);
    
    return 0;
}
