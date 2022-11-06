#include<stdio.h>
int main(){
    int n, a ,i;
    scanf("%d", &n);
    while(n--){
        int count=0;
        scanf("%d", &a);
        if(a==1 || a==2) printf("%d eh primo\n", a);
        else if(a>2){
            for(i=2; i<a; i++){
                if(a%i==0){
                    count++;
                    break;
                }
            }
            if(count==0) printf("%d eh primo\n", a);
            else printf("%d nao eh primo\n", a);
        }
    }

    return 0;
}
