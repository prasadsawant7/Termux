#include <iostream>

using namespace std;

class Product

{

    public: 

    int id;

    string name;

    int price;

    

    Product(int aId[50], string aName[50], int aPrice[50]){

        id = aId;

        name = aName;

        price = aPrice;

    }

    

    void display()

    {

        cout<<"Id of product is "<<id<<endl;

        cout<<"Name of the product is "<<name<<endl;

        cout<<"Price of the product is "<<price<<endl;

    }

};

int main() 

{

    int ID[50],PRICE[50],i,n;

    string NAME[50];

    

    cout<<"Enter the number of items: "<<endl;

    cin>>n;

    

    for(i=0;i<n;i++)

    {

    cout<<"Enter the id of product: "<<endl;

    cin>>ID[i];

    cout<<"Enter the name of product: "<<endl;

    cin>>NAME[i];

    cout<<"Enter the price of product: "<<endl;

    cin>>PRICE[i];

    }

    for(i=0;i<n;i++)

    {

    Product Product[i](ID[i],NAME[i],PRICE[i]);

    }

    

    for(i=0;i<n;i++)

    {

    Product[i].display();

    }

    return 0;

}
