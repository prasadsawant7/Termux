#include <iostream>

using namespace std;

int main() 

{

    int a = 5;

    int* b = &a;

    int** c = &b;

    

    //<--- & is the address of operator --->

    //<--- & ampersend operator --->

    cout<<"The address of a is "<<&a<<endl;

    cout<<"The address of a is "<<b<<endl;

    

    //<--- * is the value at operator --->

    //<--- * pointer opeartor --->

    cout<<"The value at b is "<<*b<<endl;

    

    //<--- ** is the pointer to pointer value at operator -->

    cout<<"The address of b is "<<&b<<endl;

    cout<<"The address of b is "<<c<<endl;

    cout<<"The value at c is "<<*c<<endl;

    cout<<"The value at c is "<<**c<<endl;

    return 0;

}
