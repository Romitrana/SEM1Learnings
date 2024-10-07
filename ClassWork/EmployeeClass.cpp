
#include<iostream>
using namespace std;

class Employee{
private: string name;
         int Eid;
         float Basesalary;
         int workHour;
         int NetSalary;
         int bonus, da,hra;
         friend int getSalary(Employee);

public: void getData(){
cout<<"Enter name : ";
cin>>name;
cout<<endl<<"Enter id : ";
cin>>Eid;
cout<<endl<<"Enter Base Salary: ";
cin>>Basesalary;
cout<<endl<<"Total working hour: ";
cin>>workHour;
}
void bonusCalc(){
if(workHour>=50){
    bonus = 5000;
    cout<<"You got bonus of "<<bonus<<endl;
}else if(workHour>=40 && workHour<50)
{
    bonus = 2000;
    cout<<"You got bonus of "<<bonus<<endl;
}

da=(Basesalary*10)/100;
hra =(Basesalary*20)/100;
NetSalary = Basesalary + bonus + da + hra;
}

void display(){
cout<<"Name : "<<name<<endl;
cout<<"Employee ID : "<<Eid<<endl;
cout<<"BaseSalary : "<<Basesalary<<endl;
cout<<"Bonus : "<<bonus<<endl;
cout<<"NetSalary : "<<NetSalary<<endl;
}
};

int getSalary(Employee);
//get salary via friend function

int getSalary(Employee e){
return e.Basesalary;
}


int main(){
Employee E1[3];
for(int i=0;i<3;i++){
  cout<<"-----------Enter data for Employee "<<i+1<<"------------"<<endl;
  E1[i].getData();
  E1[i].bonusCalc();
}

for(int i=0;i<3;i++){
  cout<<"-----------Details of Employee "<<i+1<<"------------"<<endl;
  E1[i].display();
}

//emoployess with same salary
for(int i=0;i<3;i++){
    int sal = E1[i].NetSalary;
    int flag=0;
    for(int j=i+1;j<3;j++){
        if(sal==E1[j].NetSalary){
            flag=1;
        }else{
            flag=0;
        }
    }
    if(flag){
        cout<<E1[i].name<<" ";
    }
    cout<<endl;
}
cout<<"Has same salary"<<endl;

return 0;
}
