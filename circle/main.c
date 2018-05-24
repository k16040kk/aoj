//
//  main.c
//  circle
//
//  Created by k16040kk on 2018/05/22.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double r=0;
    double s=0,n=0;
    
    scanf("%lf",&r);
    
    s=(double)r*r*M_PI;
    n=(double)2*r*M_PI;
    
    printf("%lf %lf\n",s,n);
    return 0;
}
