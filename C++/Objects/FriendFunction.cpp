#include<iostream>
using namespace std;

class Book{
private: char Bname[30];
         int price;
         friend int getpriceFriend(Book); //declaration of friend function
public: void getData(){
cout<<"Enter book Name : ";
cin>>Bname;
cout<<endl<<"Enter price : ";
cin>>price;
}

void display(){
cout<<"The book name is : "<<Bname;
cout<<endl<<"The price is : "<<price;
}

int getPricefromInsideFunction(){
return price;
}

//will define outside via :: scope of resolution operator
int getPricefromOutsideFunction();
};


//scope of resolution defination
int Book::getPricefromOutsideFunction(){
return price;
}


//friend function defination
int getpriceFriend(Book b){
return b.price;
}




int main() {
Book B1;
//cout<<B1.price; //so here i cannot access private member directly;
B1.getData();
B1.display();

//access with the member function
cout<<endl<<"getting book price via member function defined inside : "<<B1.getPricefromInsideFunction(); //getting data when function defined inside
cout<<endl<<"getting book price via member function defined outside : "<<B1.getPricefromOutsideFunction()<<endl;; //getting data when function defined inside

//access price via friend function
cout<<"getting book price via friend function : "<<getpriceFriend(B1);
return 0;
}
