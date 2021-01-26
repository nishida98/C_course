#include <stdio.h>
#include <stdlib.h>

int userInput()
{
    int age;
    //char name[20] -> quando nao especificamos o valor que a variavel ira receber, precisamos especificar o quanto de memoria o C precisa alocar
    printf("Enter your age: ");
    // para doubles %lf
    scanf("%d", &age);
    //scanf("%s%s", name1, name2)
    //fgets(variavel, quantidade de caracteres, stdin) -> especifico para strings

    printf("Your age is %d", age);

    return 0;
}
