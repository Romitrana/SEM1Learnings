
#include<iostream>
#include<string.h>
using namespace std;
//int ageCalculator(int,int);

class Item{
public:
    int quantity;
    int price;
    int total;
    Item(int qty,int prc){
    quantity = qty;
    price=prc;
    }
    int getTotal(){
    total = quantity*price;
    return total;
    }
};
int main(){
    Item I1(4,430);
    Item *ptr = &I1;
    cout<<"Total price = "<<ptr->getTotal();

    /*int age,current_year,birth_year;
    string name;
    cout<<"Enter Your Name : ";
    getline(cin, name);
    cout<<endl;
    cout<<"Enter Birth Year : ";
    cin>>birth_year;
    cout<<endl;
    cout<<"Enter Current Year : ";
    cin>>current_year;
    age = ageCalculator(current_year,birth_year);
    cout<<"Hello!, "<<name<<" Your Age is "<<age<<endl;*/
    return 0;
}

/*int ageCalculator(int c,int b){
    return (c-b);
}*/
