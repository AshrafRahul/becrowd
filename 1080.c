#include<stdio.h>
int main(){
    int i, max=0, min, a[100];

    for(i=0; i<100; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<100; i++){
        if(a[i]>max){
            max=a[i];
            min=i+1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", min);


    return 0;
}
