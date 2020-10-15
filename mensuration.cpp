#include <iostream>

#define PI 3.14

using namespace std;

class circle

{

    float radius,area,circumference;

    

    public: 

    void getdata()

    {

        cout<<"Enter the radius of circle: "<<endl;

        cin>>radius;

    }

    void areacircum()

    {

        area = PI*radius*radius;

        circumference = 2*PI*radius;

    }

    void display()

    {

        cout<<"The area of circle is "<<area<<" and circumference of circle is "<<circumference<<endl;

    }

};

int main() 

{

    int i,n;

    cout<<"Enter the number of circles: "<<endl;

    cin>>n;

    circle circle[n];

    for(i=0;i<n;i++)

    {

        circle[i].getdata();

        circle[i].areacircum();

        circle[i].display();

    }

    return 0;

}
