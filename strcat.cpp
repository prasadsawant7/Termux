#include <cstring> 

#include <iostream> 

using namespace std; 

int main() 

{ 

    char str1[20],str2[20];

    cin>>str1;

    cin>>str2;

    strcat(str1,str2); 

    cout<<str1; 

    return 0; 

}  

