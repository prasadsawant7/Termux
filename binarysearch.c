#include <stdio.h>

int main() 

{

    int arr[100]; 

    int first,last,n,i,key,mid,FLAG=0;

    

    printf("Enter the total number of elements of array\n");

    scanf("%d",&n);

    

    printf("Enter the array elements\n");

    for(i=0;i<n;i++)

    {

        scanf("%d", &arr[i]);

    }

    

    printf("Enter key number: \n");

    scanf("%d",&key); 

    

    do

    { 

      first=0;

      last=n-1;

      

      mid=(first+last)/2; 

    

      if(key==arr[mid]) 

      { 

       printf("\nkey found at %d position\n",mid+1);

       FLAG=1;

      } 

      else if(key<arr[mid])

      {

        last=mid-1; 

      } 

      else

      {

        first=mid+1;

      }

      

    }while(first <= last && FLAG == 0); 

    

    if(FLAG == 0)

     printf("\nSorry key not found!\n");

    return 0;

}
