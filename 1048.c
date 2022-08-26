#include<stdio.h>
int main(){
    float n;
    scanf("%f", &n);
    float pm, tm;

    if(n>=0 && n<=400.00){
        pm = n*((float)15/(float)100);
        tm = n+pm;
        printf("Novo salario: %.2f\n", tm);
        printf("Reajuste ganho: %.2f\n", pm);
        printf("Em percentual: 15 %%\n");
    }
    else if(n>=400.01 && n<=800.00){
        pm = n*((float)12/(float)100);
        tm = n+pm;
        printf("Novo salario: %.2f\n", tm);
        printf("Reajuste ganho: %.2f\n", pm);
        printf("Em percentual: 12 %%\n");
    }
    else if(n>=800.01 && n<=1200.00){
        pm = n*((float)10/(float)100);
        tm = n+pm;
        printf("Novo salario: %.2f\n", tm);
        printf("Reajuste ganho: %.2f\n", pm);
        printf("Em percentual: 10 %%\n");
    }
    else if(n>=1200.01 && n<=2000.00){
        pm = n*((float)7/(float)100);
        tm = n+pm;
        printf("Novo salario: %.2f\n", tm);
        printf("Reajuste ganho: %.2f\n", pm);
        printf("Em percentual: 7 %%\n");
    }
    else{
        pm = n*((float)4/(float)100);
        tm = n+pm;
        printf("Novo salario: %.2f\n", tm);
        printf("Reajuste ganho: %.2f\n", pm);
        printf("Em percentual: 4 %%\n");
    }



    return 0;
}
