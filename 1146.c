#include<stdio.h>
int main(){
    int x,i,j;

    while(x!=0){
        scanf("%d", &x);
        for(j=1; j<=x; j++){
            if(j<x){
                printf("%d ", j);
            }
            else if(j==x){
                printf("%d\n", j);
            }
        }
    }


    return 0;
}
