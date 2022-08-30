#include<stdio.h>
int main(){
    int dd, mm, yy;
    scanf("%d/%d/%d", &dd, &mm, &yy);

    if(mm<10){
        printf("0%d", mm);
    }
    else{
        printf("%d", mm);
    }
    printf("/");
    if(dd<10){
        printf("0%d", dd);
    }
    else{
        printf("%d", dd);
    }
    printf("/");
    if(yy<10){
        printf("0%d", yy);
    }
    else{
        printf("%d", yy);
    }

    printf("\n");

    if(yy<10){
        printf("0%d", yy);
    }
    else{
        printf("%d", yy);
    }
    printf("/");
    if(mm<10){
        printf("0%d", mm);
    }
    else{
        printf("%d", mm);
    }
    printf("/");
    if(dd<10){
        printf("0%d", dd);
    }
    else{
        printf("%d", dd);
    }

    printf("\n");

    if(dd<10){
        printf("0%d", dd);
    }
    else{
        printf("%d", dd);
    }
    printf("-");
    if(mm<10){
        printf("0%d", mm);
    }
    else{
        printf("%d", mm);
    }
    printf("-");
    if(yy<10){
        printf("0%d", yy);
    }
    else{
        printf("%d", yy);
    }

    printf("\n");
}
