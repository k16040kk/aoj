//
//  main.c
//  grading
//
//  Created by k16040kk on 2018/05/27.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,f,r,i=0;
    char check[50];
    
    scanf("%d %d %d",&m,&f,&r);
    while(1){
        if(m==-1&&f==-1&&r==-1){
            for(int j=0;j<i;j++){
                printf("%c\n",check[j]);
            }break;
        }
        if(m==-1||f==-1){
            check[i]='F';
            i++;
        }else if(m+f>=80){
            check[i]='A';
            i++;
        }else if(m+f>=65&&m+f<80){
            check[i]='B';
            i++;
        }else if(m+f>=50&&m+f<65){
            check[i]='C';
            i++;
        }else if(m+f>=30&&m+f<50){
            if(r>=50){
                check[i]='C';
                i++;
            }else{
                check[i]='D';
                i++;
            }
            
        }else if(m+f<30){
            check[i]='F';
            i++;
        }
        scanf("%d %d %d",&m,&f,&r);
    }
    return 0;
}
