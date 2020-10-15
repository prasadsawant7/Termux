#include <iostream>

using namespace std;

int main()

{

    int arr1[2][2],arr2[2][2],add[2][2],i,j;

    

    cout<<"Enter 1st array elements: \n";

    for(i=0;i<2;i++)

    {

        for(j=0;j<2;j++)

        {

            cin>>arr1[i][j];

        }

    }

    

    cout<<"Enter 2nd array elements: \n";

    for(i=0;i<2;i++)

    {

        for(j=0;j<2;j++)

        {

            cin>>arr2[i][j];

        }

    }

    

    

    for(i=0;i<2;i++)

    {

        for(j=0;j<2;j++)

        {

            add[i][j] = arr1[i][j] + arr2[i][j];

        }

    }

    

    cout<<"The addition of 2*2 matrix is: \n";

    for(i=0;i<2;i++)

    {

        for(j=0;j<2;j++)

        {

            cout<<add[i][j];

            cout<<"\t";

        }

        cout<<"\n";

    }

    return 0;

}
