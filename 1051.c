#include<stdio.h>
int main(){
    double t;
    scanf("%lf", &t);

    if(t>=0.00 && t<=2000.00){
        printf("Isento\n");
    }
    if(t>=2000.01 && t<=3000.00){
        double c=(t-2000.00)*.08;
        printf("R$ %.2f\n", c);
    }
    if(t>=3000.01 && t<=4500.00){
        double a=(1000.00*0.08)+((t-3000.00)*0.18);
        printf("R$ %.2f\n", a);
    }
    if(t>4500){
        double b=(1000.00*0.08)+(1500.00*0.18)+((t-4500.00)*0.28);
        printf("R$ %.2f\n", b);
    }

    return 0;
}
