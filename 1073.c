#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    scanf("%d", &n);

    for(i=2; i<=n; i=i+2){
        int p = pow(i,2);
        printf("%d^2 = %d\n", i, p);
    }

    return 0;
}
