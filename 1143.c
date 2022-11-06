#include<stdio.h>
int main(){
    int n,a=1;
    scanf("%d", &n);
    while(n--){
        printf("%d %d %d\n", a, a*a, a*a*a);
        a++;
    }

    return 0;
}
