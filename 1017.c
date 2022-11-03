#include<stdio.h>
int main(){
    float t, v, use;
    scanf("%f", &t);
    scanf("%f", &v);

    use = (t*v)/12;

    printf("%.3f\n", use);

    return 0;
}
