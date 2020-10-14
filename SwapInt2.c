#include <stdio.h>

int swap(int a, int b)

{

    a = a + b;

    b = a - b;

    a = a - b;

    

    printf("The changed values of 2 numbers is %d and %d\n", a, b);

    

    return 0;

}

int main() 

{

    int a,b;

    printf("Enter 2 numbers: \n");

    scanf("%d %d", &a, &b);

    printf("You enterd this 2 numbers: %d and %d\n", a, b);

    swap(a,b);

    return 0;

}
