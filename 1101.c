#include<stdio.h>
int main(){
    int i,m,n, sum=0;
    scanf("%d %d", &m, &n);
    for( ; m>0 && n>0; ){
        if(m>n){
                sum=0;
            for(i=n; i<=m; i++){
                printf("%d ", i);
                sum = sum+i;
            }
        }
        else if(m<n){
            sum=0;
            for(i=m; i<=n; i++){
                printf("%d ", i);
                sum = sum+i;
            }
        }
        printf("Sum=%d\n", sum);
        scanf("%d %d", &m, &n);
    }


    return 0;
}
