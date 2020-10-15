#include <iostream>

using namespace std;

class dog

{ 

    char name[20];

    char breed[20];

    int age;

    

    public:

    void getdata()

    {

        cout<<"Enter name of the dog: "<<endl;

        cin>>name;

        cout<<"Enter breed of the dog: "<<endl;

        cin>>breed;

        cout<<"Enter age of the dog: "<<endl;

        cin>>age;

    }

    void display()

    {

        cout<<"Name of the dog is "<<name<<endl;

        cout<<"Breed of the dog is "<<breed<<endl;

        cout<<"Age of the dog is "<<age<<endl;

    }

};

int main() 

{

    dog dog1;

    cout<<"Enter the details of your dog"<<endl;

    dog1.getdata();

    dog1.display();

    return 0;

}
