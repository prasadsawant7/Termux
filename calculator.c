#include <stdio.h>

float add(float,float);

float sub(float,float);

float mult(float,float);

float div(float,float);

int main()

{   

    int o;

    float a,b,ad,sb,ml,dv;

    

    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tSimple Calculator\n\n");

    

    printf("What Operation You Want To Do?\n\n");

    printf("(Note: Decimal Point Is Fixed To 3rd Decimal!)\n\n");

    printf("1. Addition\n");

    printf("2. Subtraction\n");

    printf("3. Multiplication\n");

    printf("4. Division\n");

    

    printf("\nPlease Enter The Number Of Operation:\n");

    scanf("%d",&o);

    

    printf("\nEnter 2 Numbers:\n");

    scanf("%f%f",&a,&b);

    

    switch(o)

    {

    

        case 1:

        ad = add(a,b);

        printf("\nSum is %.3f", ad);

        break;

        

        case 2:

        sb = sub(a,b);

        printf("\nSubtraction is %.3f", sb);

        break;

        

        case 3:

        ml = mult(a,b);

        printf("\nMultiplication is %.3f", ml);

        break;

        

        case 4:

        dv = div(a,b);

        printf("\nDivision is %.3f", dv);

        break;

        

        default:

        printf("\nError!");

        break;

        

    }

    

    return 0;

}

float add(float a, float b)

{

    int c;

    c = a + b;

    return c;

}

float sub(float a, float b)

{

    int c;

    c = a - b;

    return c;

}

float mult(float a, float b)

{

    int c;

    c = a * b;

    return c;

}

float div(float a, float b)

{

    int c;

    c = a / b;

    return c;

}

/*

1. Start

2. what do you want to do?

3. Input 2 numbers

4. do particular operation

5. Display Output

6. Stop

*/
