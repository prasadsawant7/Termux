#include <stdio.h>

int main() 

{

    int arr[100],n,key,i;

    

    printf("Enter the number of elements of array:\t");

    scanf("%d", &n);

    

    printf("\nEnter %d array elements:\n", n);

    for(i=0;i<n;i++)

    {

        scanf("%d", &arr[i]);

    }

    

    printf("Enter the key which you want to find from array elements: ");

    scanf("%d", &key);

    

    for(i=0;i<n;i++)

    {

        if(arr[i] == key)

        {

            printf("\n%d is present in the array at position %d", key, i+1);

            break;

        }

    }

    

    if(i == n)

    {

        printf("\n%d is not present in array", key);

    }

    return 0;

}

