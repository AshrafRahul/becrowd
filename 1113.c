#include<stdio.h>
int main(){
    int x,y;
    while(1){
        scanf("%d %d", &x, &y);
        if(x==y){
            break;
        }
        else{
            if(x<y){
                printf("Crescente\n");
            }
            if(x>y){
                printf("Decrescente\n");
            }
        }
    }

    return 0;
}
