#include<iostream>
#include<string.h>
using namespace std;
int ageCalculator(int,int);
int main(){ 
    int age,current_year,birth_year;
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
    cout<<"Hello!, "<<name<<" Your Age is "<<age<<endl;
    return 0;
}

int ageCalculator(int c,int b){ 
    return (c-b);
}