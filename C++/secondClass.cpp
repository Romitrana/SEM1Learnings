#include<iostream>
using namespace std;

class Student{
private: char name[20];
         int regNO, sub[3];
         float total=0, avg;
public:
     void read(){
        cout<<"Enter the Name : ";
        cin>>name;
        cout<<endl<<"Enter registration no :";
        cin>>regNO;
        cout<<endl<<"----Enter the 3 Subjects Marks----"<<endl;
        for(int i=0;i<3;i++){
           cout<<"Marks"<<i+1<<" : ";
        cin>>sub[i];
     }
     }

     void result(){
         int small = sub[0];
         for(int i=0;i<3;i++){
            total+=sub[i];
         }
         //taking out small one to calculate best 2 out of 3
         for(int i=1;i<3;i++){
            if(small>sub[i]){
                small = sub[i];
            }
         }
         avg = (total-small)/2;
     }
     void print();
     void getMax();
     void getMin();

     int getAverage(){
     return this->avg;
     }
};

void getTopper(int,Student*);

void Student::print(){
cout<<"        Name : "<<name<<endl;
cout<<"        Reg No : "<<regNO<<endl;
for(int i=0;i<3;i++){
    cout<<"        Marks "<<(1+i)<<":"<<sub[i]<<endl;
}
cout<<"        Total Marks Obtained : "<<total<<endl;
cout<<"        Average Marks : "<<avg<<endl;
}

void Student::getMin(){
    int small = sub[0];
    for(int i=1;i<3;i++){
        if(small>=sub[i]){
            small = sub[i];
        }
    }

    cout<<"MINIMUM MARKS = "<<small<<endl;
}



void Student::getMax(){
  int large = sub[0];
    for(int i=1;i<3;i++){
        if(sub[i]>=large){
            large = sub[i];
        }
    }

    cout<<"MAXIMUM MARKS = "<<large<<endl;
}
int main(){
Student S[5];
int n;
cout<<"Enter the number of students :";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"------Enter the data for student "<<i+1<<"-------"<<endl;
    S[i].read();
    S[i].result();
}

for(int i=0;i<n;i++){
    cout<<"--------------STUDENT "<<i+1<<"---------------"<<endl;
    S[i].getMax();
    S[i].getMin();
    S[i].print();
}


getTopper(n,S);
return 0;
}

void getTopper(int n,Student S[]){
    int highIndex;
    for(int i=0;i<n;i++){
     if(S[i].getAverage()>=S[i+1].getAverage()){
        highIndex = i;
     }
     else{
        highIndex = i+1;
     }
    }
    cout<<"----The Topper of the class----"<<endl;
    cout<<"    Name : "<<S[highIndex].name<<endl;
}




