#include<iostream>

using namespace std;
float calculate_percentage(int,int,int);
void getGrade(int);
int main(){
int m1,m2,m3;
float perc;
char name[50];
int age;
cout<<"Enter Your Name : ";
cin.getline(name, 50);
cout<<endl<<"Enter your Age : ";
cin>>age;
cout<<endl<<"Enter three subjects marks:";
cin>>m1>>m2>>m3;
perc = calculate_percentage(m1,m2,m3);
cout<<"Name : "<<name<<endl;
cout<<"Age : "<<age<<endl;
cout<<"Percentage obtained : "<<perc<<"%"<<endl;
getGrade((int)perc);
return 0;
}

float calculate_percentage(int a,int b,int c){
int total = a+b+c;
float per = (total/300.0)*100;
return per;
}

void getGrade(int p){
if(p>=90){
cout<<"Grade : o+"<<endl;
}else if(p>=80 && p<=90){
cout<<"Grade : A+"<<endl;
}else if(p>=70 && p<=80){
cout<<"Grade : B+"<<endl;
}else if(p>=60 && p<=70){
cout<<"Grade : C"<<endl;
}else if(p>=50 && p<=60){
cout<<"Grade : D"<<endl;
}else if(p>=30 && p<=40){
cout<<"Grade : E"<<endl;
}else{
cout<<"Grade : Fail"<<endl;
}
}
