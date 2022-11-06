#include<stdio.h>
int main(){
    float age;
    float count=0;
    float sum=0;
    while(1){
        scanf("%f", &age);
        if(age<0) break;
        else{
            count++;
            sum = sum+age;
        }
    }
    float avg = sum/count;
    printf("%.2f\n", avg);

    return 0;
}
