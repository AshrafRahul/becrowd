#include<stdio.h>
int main(){
    int n, i,a;
    scanf("%d", &n);

    for(a=1; a<=n; a++){
        scanf("%d", &i);
        if(i%2==0 && i!=0){
            printf("EVEN ");
            if(i>0){
                printf("POSITIVE\n");
            }
            if(i<0){
                printf("NEGATIVE\n");
            }
        }
        else if(i%2!=0){
            printf("ODD ");
            if(i>0){
                printf("POSITIVE\n");
            }
            if(i<0){
                printf("NEGATIVE\n");
            }
        }
        else{
            printf("NULL\n");
        }
    }


    return 0;
}
