#include<stdio.h>
int main(){
    int n,i=1,j=2,k=3;
    scanf("%d", &n);
    while(n--){
        printf("%d %d %d PUM\n", i, j, k);
        i+=4;
        j+=4;
        k+=4;
    }

    return 0;
}
