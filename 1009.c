#include<stdio.h>
int main(){
    double sal, bon, tot;
    char name;
    scanf("%s", &name);
    scanf("%lf", &sal);
    scanf("%lf", &bon);

    tot = sal + (bon*.15);
    printf("TOTAL = R$ %.2lf\n", tot);

    return 0;
}
