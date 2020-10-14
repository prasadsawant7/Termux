#include <stdio.h>

void swap(int *fn, int *sn)

{

    int temp = *fn;

    *fn = *sn;

    *sn = temp;

}

int main()

{

    int first,second;

    printf("Enter first number: \n");

    scanf("%d", &first);

    printf("Enter second number: \n");

    scanf("%d", &second);

    

    swap(&first, &second);

    

    printf("The first number is %d and The second number is %d", first, second);

    

    return 0;

}
