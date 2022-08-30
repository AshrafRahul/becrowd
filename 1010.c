#include<stdio.h>
int main(){
    int c1,c2,u1,u2;
    float p1,p2;
    scanf("%d %d %f", &c1, &u1, &p1);
    scanf("%d %d %f", &c2, &u2, &p2);

    printf("VALOR A PAGAR: R$ %.2f\n", (((float)u1*p1)+((float)u2*p2)));

    return 0;
}
