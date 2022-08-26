#include<stdio.h>
int main(){
    int N, s, m1, m, h;
    scanf("%d", &N);

    s=N%60;
    m1=N/60;
    m=m1%60;
    h=m1/60;

    printf("%d:%d:%d", h, m, s);

    return 0;
}
