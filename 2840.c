#include<stdio.h>
int main(){
    float r,l;
    scanf("%f %f", &r, &l);

    float r1=((float)4/(float)3)*3.1415*r*r*r;
    int l1=(int)l/(int)r1;
    printf("%d\n", l1);


    return 0;
}
