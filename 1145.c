#include<stdio.h>
int main(){
    int x,y,a,b,d=1;
    scanf("%d %d", &x, &y);
    a=y/x;
    b=x;
    for(int i=1; i<=a; i++){
        printf("%d", d);
        for(int j=d+1; j<=b; j++){
            printf(" %d", j);
        }
        printf("\n");
        d = d+x;
        b = b+x;
    }


    return 0;
}
