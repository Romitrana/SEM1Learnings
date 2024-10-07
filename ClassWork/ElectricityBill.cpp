#include<iostream>
using namespace std;

class ElectricityBill{
private: string consumer_Name;
         int consumer_id;
         int current_reading;
         int old_reading;
         int total_unit;
         int total_bill;
public: void getData(){
cout<<"Enter consumer name : ";
cin>>consumer_Name;
cout<<endl<<"Enter consumer id : ";
cin>>consumer_id;
cout<<endl<<"Enter current reading: ";
cin>>current_reading;
cout<<endl<<"Enter old reading: ";
cin>>old_reading;
total_unit = (current_reading - old_reading); //total unit consumed
}
void display(){
cout<<"Consumer Name : "<<consumer_Name<<endl;
cout<<"Consumer ID : "<<consumer_id<<endl;
cout<<"Current Redaing : "<<current_reading<<endl;
cout<<"Old Reading : "<<old_reading<<endl;
cout<<"Total Unit Consumed : "<<total_unit<<endl;
cout<<"---------Total Bill to Pay : "<<getTotalBill()<<endl;
}
int getTotalBill(){
if(total_unit<=100){
    total_bill = total_unit * 3;
}else if(total_unit>100 && total_unit<=200){
    total_bill = (100*3) + (total_unit-100)*4;
}else{
    total_bill = (100*3) +(100*4) + (total_unit-200)*5;
}
return total_bill;
}

};


int main(){
ElectricityBill Consumer1;
Consumer1.getData();
Consumer1.display();
return 0;
}

