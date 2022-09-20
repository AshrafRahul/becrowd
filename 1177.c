#include<stdio.h>

int main(){
    int n[1000];
    int t;
    scanf("%d", &t);

    int x=0;

    for(int i=0; i<1000; i++){
        printf("N[%d] = %d\n", i, x);
        x++;

        if(x==t){
            x=0;
        }
    }

    return 0;
}
