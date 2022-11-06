#include<stdio.h>
int main(){
    int n, x, y, i;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        int sum=0;
        y=x/2;
        for(i=1; i<=y; i++){
            if(x%i==0){
                sum = sum+i;
            }
        }
        if(x==sum)printf("%d eh perfeito\n", x);
        else printf("%d nao eh perfeito\n", x);
    }

    return 0;
}
