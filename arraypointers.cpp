#include <iostream>

using namespace std;

// Accessing array elements with pointer

int main()

{

    int arr[5] = {2,4,6,8,10}, *p;

    

    // Storing address of arr[0]

    // p = &arr; is not valid, its error

    p = arr;

    

    // *p derefferncing pointer p

    // cout<<"The value at arr[0] is "<<*p<<endl;

    

    /*

        p++/p = p+1 == current value at p + i + sizeof(data_type);

    

    for(int i=0;i<5;i++)

    {

        cout<<"The value in arr[] are "<<*p<<endl;

        p++;

    }

    */

    for(int i=0;i<5;i++)

    {

        cout<<"The value in arr[] are "<<*p<<endl;

        p = p+1;

    }

    return 0;

}
