#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student{
private: string name;
         int age;
         int roll;
         int cgpa;
public:
    void getData(){
    cout<<"Enter name :";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter age :";
    cin>>age;
    cout<<"Enter roll no :";
    cin>>roll;
    cout<<"Enter cgpa :";
    cin>>cgpa;
    }
    void displayData(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Roll No = "<<roll<<endl;
        cout<<"CGPA = "<<cgpa;

    }

};

int main(){
Student S[3];
fstream file;
file.open("D:\\writeObj.txt",ios::out);
if(!file){
    cout<<"Unable to open file"<<endl;
    return 0;
}
cout<<"-------Writing student info to file--------"<<endl;
for(int i=0;i<3;i++){
    cout<<"----STUDENT "<<i+1<<"----"<<endl;
    S[i].getData();
    file.write((char*)&S[i],sizeof(S[i]));
}
file.close();

//reading the file of objects
file.open("D:\\writeObj.txt",ios::in);
if(!file){
    cout<<"Unable to open file"<<endl;
    return 0;
}
cout<<"---- student info from file --------"<<endl;
for(int i=0;i<3;i++){
    cout<<endl<<"----STUDENT "<<i+1<<"----"<<endl;
    S[i].displayData();
    file.read((char*)&S[i],sizeof(S[i]));
}
file.close();
return 0;
}
