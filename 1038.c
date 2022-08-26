#include<stdio.h>
int main(){
    int X,Y;
    scanf("%d %d", &X,&Y);
    float total;

    switch(X){
    case 1:
        total = 4.00*(float)Y;
        printf("Total: R$ %.2f\n", total);
        break;
    case 2:
        total = 4.50*(float)Y;
        printf("Total: R$ %.2f\n", total);
        break;
    case 3:
        total = 5.00*(float)Y;
        printf("Total: R$ %.2f\n", total);
        break;
    case 4:
        total = 2.00*(float)Y;
        printf("Total: R$ %.2f\n", total);
        break;
    case 5:
        total = 1.50*(float)Y;
        printf("Total: R$ %.2f\n", total);
        break;
    default:
        printf("Not a valid integer\n");
    }

    return 0;
}
