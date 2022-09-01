#include<stdio.h>

int main(){
    float a,b,c,d,e;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float avg = ((a*(float)2)+(b*(float)3)+(c*(float)4)+(d*(float)1))/(2+3+4+1);
    printf("Media: %.1f\n", avg);

    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &e);

        printf("Nota do exame: %.1f\n", e);


        float avg1 = (avg+e)/(float)2;
        if(avg1>=5.0){
            printf("Aluno aprovado.\n");
        }
        else if(avg1<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", avg1);
    }



    return 0;
}
