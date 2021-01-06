//
//  main.c
//  seconds into hours , min , sec
//
//  Created by NILESH KUMAR on 1/6/21.
//

#include <stdio.h>
int main() {
    int sec, h, m, s;
    printf("Input seconds: ");
    scanf("%d", &sec);
    
    h = (sec/3600);
    
    m = (sec -(3600*h))/60;
    
    s = (sec -(3600*h)-(m*60));
    
    printf("hours=%d ,minutes=%d , second=%d ",h,m,s);
    
    return 0;
}
