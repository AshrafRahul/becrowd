#include<stdio.h>
int main(){
    int x,i;
    while(1){
        scanf("%d", &x);
        int sum=0;
        if(x==0) break;
        else{
            if(x%2!=0){
                for(i=x+1; i<x+10; i+=2){
                    sum = sum+i;
                }
            }
            else if(x%2==0){
                for(i=x; i<x+10; i+=2){
                    sum = sum+i;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
