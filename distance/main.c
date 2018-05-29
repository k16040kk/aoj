//
//  main.c
//  distance
//
//  Created by k16040kk on 2018/05/29.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    double x1,x2,y1,y2;
    double ans=0;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    
    ans=(double)sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%lf\n",ans);
    return 0;
}
