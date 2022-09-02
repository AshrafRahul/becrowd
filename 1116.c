#include<stdio.h>
int main(){
    int x,y,n, i;
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        scanf("%d %d", &x, &y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else if(i>n){
            break;
        }
        else{
            printf("%.1f\n", (float)x/(float)y);
        }
    }


    return 0;
}
