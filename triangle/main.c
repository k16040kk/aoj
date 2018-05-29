//
//  main.c
//  triangle
//
//  Created by k16040kk on 2018/05/29.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    double d,s,l,h;
    scanf("%d %d %d",&a,&b,&c);
    
    s=(double)0.5*a*b*sin((double)c*M_PI/180);
    d=(double)sqrt(a*a+b*b-2*a*b*cos((double)c*M_PI/180));
    l=(double)a+b+d;
    h=(double)2*s/a;
    printf("%lf\n",s);
    printf("%lf\n",l);
    printf("%lf\n",h);
    return 0;
}
