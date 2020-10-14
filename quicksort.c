#include <stdio.h>

void swap(int *fn, int *sn)

{

    int temp = *fn;

    *fn = *sn;

    *sn = temp;

}

int partition(int array[], int lob, int upb)

{

    int start = lob;

    int end = upb;

    int pivot = array[lob];

    

    while(start < end)

    {

        while(array[start] <= pivot)

        {

            start++;

        }

        while(array[end] > pivot)

        {

            end--;

        }

        

        if(start < end)

        {

            swap(&array[start], &array[end]);

        }

    }

    swap(&array[lob], &array[end]);

    

    return end;

}

void quicksort(int array[], int lob, int upb)

{

    if(lob < upb)

    {

        int loc = partition(array,lob,upb);

        quicksort(array,lob,loc-1);

        quicksort(array,loc+1,upb);

    }

}

void printArray(int array[], int size)

{

    for(int i=0;i<size;i++)

    {

        printf("%d\t", array[i]);

    }

    printf("\n");

}

int main()

{

    int arr[100],i,lb,ub,n;

    

    printf("Enter the number of elements of array: \n");

    scanf("%d", &n);

    

    printf("Enter the array elements: \n");

    for(i=0;i<n;i++)

    {

        scanf("%d", &arr[i]);

    }

       

    lb = 0;

    ub = n-1;

    

    quicksort(arr,lb,ub);

    printf("Sorted Array in Acsending order: \n");

    printArray(arr,n);

    return 0;

}
