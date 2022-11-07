#include<stdio.h>
int main(){
    int n, min;
    scanf("%d", &n);
    int a[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    min=a[0];
    int pos=0;
    for(i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, pos);

    return 0;
}
