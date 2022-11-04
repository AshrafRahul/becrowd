#include<stdio.h>
int main(){
    int x,i;
    scanf("%d", &x);

    if(x%2==0){
        for(i=x+1; i<x+12; i=i+2){
            printf("%d\n", i);
        }
    }
    if(x%2!=0){
        for(i=x; i<x+12; i=i+2){
            printf("%d\n", i);
        }
    }


    return 0;
}
