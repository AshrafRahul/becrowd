#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    if(((a+b)>c) && ((a+c)>b) && (b+c)>a){
        float per=a+b+c;
        printf("Perimetro = %.1f\n", per);
    }
    else{
        float area = ((a+b)/(float)2)*c;
        printf("Area = %.1f\n", area);
    }


    return 0;
}
