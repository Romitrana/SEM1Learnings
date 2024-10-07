#include<iostream>
using namespace std;

class Employee{
private: string name;
         string address;
         float salary;
         int uID;
         string branch;
public: Employee(string n,string a,float s,int id,string b){
this->name=n;
this->address=a;
this->salary=s;
this->uID=id;
this->branch=b;
cout<<"Employee Data has been saved successfully!"<<endl;
}
void getEmployeeData(){
  cout<<"-------Employee Details------"<<endl;
  cout<<"Uid: "<<this->uID<<endl;
  cout<<"Name: "<<this->name<<endl;
  cout<<"Address: "<<this->address<<endl;
  cout<<"Salary: "<<this->salary<<endl;
  cout<<"Branch: "<<this->branch<<endl;
}
void changeBranch(string newBranch){
this->branch=newBranch;
cout<<"branch updated successfully for Employee UID : "<<this->uID<<endl;
}
};

int main(){
Employee E1("Romit","Jharkhand",28000.00,3,"Jalandhar");
E1.getEmployeeData();
E1.changeBranch("Delhi");
E1.getEmployeeData();
return 0;
}
