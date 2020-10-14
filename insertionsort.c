#include <stdio.h>

int main() 

{

    int i,j,count,temp,number[25];

    

    printf("Enter the total numbers of array: \n");

    scanf("%d", &count);

    

    printf("Enter %d elements: \n", count);

    for(i=0;i<count;i++)

    {

        scanf("%d", &number[i]);

    }

    

    for(i=0;i<count;i++)

    {

        for(j=i+1;j<count;j++)

        {

            if(number[j]>number[i])

            {

                temp=number[j];

                number[i]=number[j];

                number[j]=temp;

            }

        }

    }

    

    printf("Sorted Array\n");

    for(i=0;i<count;i++)

    {

        printf("%d ", number[i]);

    }

    

    return 0;

}
