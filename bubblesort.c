#include <stdio.h>

int main() 

{

    int arr[100],i,j,n,temp;

    printf("Enter the number of elements to be sorted: \n");

    scanf("%d", &n);

    

    

    for(i=0;i<n;i++)

    {

        printf("Enter element no. : %d\n", i+1);

        scanf("%d", &arr[i]);

    }

    

    for(i=0;i<n;i++)

    {

        for(j=0;j<n-i-1;j++)

        {

            if(arr[j]>arr[j+1])

            {

                temp = arr[j];

                arr[j] = arr[j+1];

                arr[j+1] = temp;

            }

        }

        

        if(j>n-i-1)

        {

            break;

        }

    }

    

    printf("Sorted Array: ");

    for(i=0;i<n;i++)

    {

        printf("%d ", arr[i]);

    }

    

    return 0;

}
