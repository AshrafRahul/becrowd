#include<stdio.h>
int main(){
    int a,i,j=0,c=1;
    scanf("%d", &a);
    int arr[a];

    for(i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    int b = arr[j];
    for(j=0; j<a; j++){
        if(arr[j]<b){
            b = arr[j];
            c = j+1;
        }
    }
    printf("%d\n", c);

    return 0;
}
