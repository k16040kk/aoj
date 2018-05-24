//
//  main.c
//  simple_calculator
//
//  Created by k16040kk on 2018/05/22.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    int res=0;
    char ch;
    
    scanf("%d %c %d",&a,&ch,&b);
    
    while(ch!='?'){
        switch(ch){
            case '+':
                res=a+b;
                break;
            case '-':
                res=a-b;
                break;
            case '*':
                res=a*b;
                break;
            case '/':
                res=a/b;
                break;
        }
        printf("%d\n",res);
        scanf("%d %c %d",&a,&ch,&b);
    }
   
    
    
    return 0;
}
