#include <iostream>

using namespace std;

int main() 

{

    int arr[100],n,i,min;

    

    cout<<"Enter the number of elements of array"<<endl;

    cin>>n;

    

    cout<<"Enter the array elements"<<endl;

    for(i=0;i<n;i++)

        cin>>arr[i];

     

    min = arr[0];

    for(i=0;i<n;i++)

    {

        if(min > arr[i])

        {

            min = arr[i];

        }

    }

    

    cout<<"Smallest element in array is "<<min;

    return 0;

}
