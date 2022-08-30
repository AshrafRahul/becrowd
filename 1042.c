#include<stdio.h>
int main(){
    int n=3, i, j, temp;
    int a[n], a2[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        a2[i]=a[i];
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d\n", a[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){
        printf("%d\n", a2[i]);
    }


    return 0;
}
