#include<stdio.h>
int main(){
    int i,x,y;
    scanf("%d %d", &x, &y);

    if(x>y && x>0 && y>0){
        for(i=y; i<=x; i++){
            if(i%5==2 || i%5==3){
                if(i!=x && i!=y){
                    printf("%d\n", i);
                }
            }
        }
    }
    if(x<y && x>0 && y>0){
        for(i=x; i<=y; i++){
            if(i%5==2 || i%5==3){
                if(i!=x && i!=y){
                    printf("%d\n", i);
                }
            }
        }
    }


    return 0;
}
