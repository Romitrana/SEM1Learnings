#include<iostream>
using namespace std;

class BankAccount{
private:
        int customer_id;
        int account_no;
        string name;
        string address;
        string branch;
        string IFSC;
        float balance;
public: BankAccount(string n,string a,string b,string ifsc,float bal,int accNo,int id){
this->name = n;
this->address = a;
this->branch = b;
this->IFSC = ifsc;
this->balance = bal,
this->account_no = accNo;
this->customer_id = id;
cout<<"----Account Created Successfully----"<<endl;
}
void getAccountInfo(){
cout<<"---------Account Id : "<<this->customer_id<<"----------"<<endl;
cout<<"|    Name: "<<this->name<<endl;
cout<<"|    Address: "<<this->address<<endl;
cout<<"|    Acc NO: "<<this->account_no<<endl;
cout<<"|    IFSC: "<<this->IFSC<<endl;
cout<<"|    Branch: "<<this->branch<<endl;
cout<<"|    Balance: "<<"Rs. "<<this->balance<<endl;
}
void deposit(float amt){
this->balance +=amt;
cout<<"*****Amount deposited successfully*****"<<endl;
}
void withdraw(float amt){
if(amt>this->balance){
    cout<<"#####Cannot withdraw! You Account Balance is Low#####"<<endl;
}
else{
   this->balance-=amt;
   cout<<"*****Amount Rs."<<amt<<" successfully withdrawn*****"<<endl;
   cout<<"Available Balance Rs."<<this->balance<<endl;
}
}
};

int main()
{
BankAccount A1("Romit Rana","Jharkhand","Jhumri Telaiya","BKID0004818",120000.98,481897634200012,1);
A1.getAccountInfo();
A1.deposit(40000.67);
A1.getAccountInfo();
A1.withdraw(7000.89);
A1.getAccountInfo();

return 0;
}
