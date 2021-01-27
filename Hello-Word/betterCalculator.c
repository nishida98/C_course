#include <stdio.h>
#include <stdlib.h>

void betterCalculator(){

    double num1;
    char operatorSign;
    double num2;

    printf("Enter a number: \n");
    scanf("%lf", &num1);
    printf("Enter the operation: \n");
    scanf(" %c", &operatorSign);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    if(operatorSign == '+'){
        printf("%f",num1 + num2);
    }else if(operatorSign == '-'){
        printf("%f",num1 - num2);
    }else if(operatorSign == '/'){
        printf("%f",num1 / num2);
    }else{
        printf("%f",num1 * num2);
    }

}
