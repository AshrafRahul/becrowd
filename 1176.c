#include<stdio.h>

int main(){
    long long n[61];
    n[0]=0, n[1]=1;
    for(int i=2; i<61; i++){
        n[i] = n[i-1]+n[i-2];
    }

    int t, a;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &a);
        printf("Fib(%d) = %lld\n",a, n[a]);
    }

    return 0;
}
