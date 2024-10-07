//70-80 20% scholarship
//80-90 30% scholarship
//90-100 40% scholarship
#include<iostream>
using namespace std;

class Admission{
private: char name[20];
         int regNo;
         long scholarshipGot;

public : static long total_fee;
         int prevQualificationPer;

//getting admission data
void getData(){
    cout<<"---------------------Enter student details------------------------"<<endl;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<endl<<"Enter Registration NO : ";
    cin>>regNo;
    cout<<endl<<"Enter previous qualification grade : ";
    cin>>prevQualificationPer;
}


//calculating scholarship
void calcScholarShip(int per){
if(per>=70 && per<=80){
  scholarshipGot = (20.0/100)*total_fee;
}else if(per>=80 && per<=90){
  scholarshipGot = (30.0/100)*total_fee;
}else if(per>=90){
  scholarshipGot = (40.0/100)*total_fee;
}else{
   scholarshipGot = 0;
            cout << "Scholarship cannot be determined." << endl;
}
 total_fee -= scholarshipGot;
}


//printing student data
void printStudentData(){
cout<<"Name : "<<name<<endl;
cout<<"Reg NO: "<<regNo<<endl;
cout<<"Prev Qualification percentage : "<<prevQualificationPer<<endl;
if(scholarshipGot){
cout<<"Scholar ship got (based on Prev Qualification percentage) : "<<scholarshipGot<<endl;
cout<<"Total fee to be paid: "<<total_fee<<endl;
}else{
cout<<"You are not eligible for scholarship"<<endl;
cout<<"Total fee to be paid: "<<total_fee<<endl;
}
}


//modify total_fee
static void changeTotalFee(long newFee){
total_fee = newFee;
}
};
long Admission::total_fee = 100000;



int main(){
Admission s1,s2;
s1.getData();
s1.calcScholarShip(s1.prevQualificationPer);
s1.printStudentData();


Admission::changeTotalFee(50000);
//2nd admission
s2.getData();
s2.calcScholarShip(s2.prevQualificationPer);
s2.printStudentData();

return 0;
}
