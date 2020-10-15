#include <iostream>

using namespace std;

class rectangle

{

    int length;

    int breadth;

    int area;

    int perimeter;

    

    public:

    void getdata()

    {

        cout<<"Enter length of the rectangle: "<<endl;

        cin>>length;

        cout<<"Enter breadth of the rectangle: "<<endl;

        cin>>breadth;

    }

    

    void areaperi()

    {

        area = length*breadth;

        perimeter = 2*(length + breadth);

    }

    

    void display()

    {

        cout<<"The area of rectangle is "<<area<<" and the perimeter of rectangle is "<<perimeter<<endl;

    }

};

int main() 

{

    int i,n;

    cout<<"Enter the number of rectangles"<<endl;

    cin>>n;

    rectangle rect[n];

    for(i=0;i<n;i++)

    {

        rect[i].getdata();

        rect[i].areaperi();

        rect[i].display();

    }

    return 0;

}
