//
//  main.c
//  shuffle
//
//  Created by k16040kk on 2018/05/28.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(){
    char c[300];
    int m,h,i,j,k,num=0,tmp;
    while(1){
        scanf("%s",&c);
        if(c[0]=='-')break;
        for(num=0; num<300; num++)if(c[num]=='\0')break;
        scanf("%d",&m); //シャッフル回数
        for(i=0; i<m; i++){
            scanf("%d",&h);//シャッフルする数字
            for(j=0; j<h; j++){//h分だけ文字をtmpに代入，文字を左にずらしてtmpに入れたものを後ろに付け加える
                tmp=c[0];
                for(k=0; k<num; k++){
                    c[k]=c[k+1];
                }
                c[num-1]=tmp;
            }
        }
        printf("%s\n",&c);
    }
    return 0;
}
