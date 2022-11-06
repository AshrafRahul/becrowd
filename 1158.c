#include<stdio.h>
int main(){
    int n, a ,b, i;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        int sum=0;
        if(a%2==0){
            for(i=a+1; i<=(a+(b*2)); i=i+2){
                sum=sum+i;
            }
        }
        else if(a%2!=0){
            for(i=a; i<(a+(b*2)); i=i+2){
                sum=sum+i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
