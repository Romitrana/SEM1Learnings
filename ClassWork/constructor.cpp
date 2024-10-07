#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    int age;
    float cgpa;
    string country;

public:
    //default contructor
    Student(){
    cout<<"Default constructor is called"<<endl;
    }

    //parameterized contructor
    Student(string name, int age, float cgpa, string country){
        this->name = name;
        this->age = age;
        this->cgpa = cgpa;
        this->country = country;
    }

    void printData(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "CGPA : " << cgpa << endl;
        cout << "Country : " << country << endl;
    }
      //copy contructor
     Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
        cgpa = obj.cgpa;
        country = obj.country;
        cout << "Copy constructor called" << endl;
     }
      // Destructor
    ~Student() {
        cout << "Destructor is called for " << name << endl;
    }
};

int main(){
    Student S[2];

    for(int i = 0; i < 2; i++){
        cout<<"-----STUDENT "<<i+1<<"--------"<<endl;
        string n;
        int ag;
        float cgp;
        string ctry;
        cout << "Enter Name: ";
        getline(cin, n);

        cout << "Enter Age: ";
        cin >> ag;

        cout << "Enter CGPA: ";
        cin >> cgp;
        cin.ignore();
        cout << "Enter Country: ";
        getline(cin, ctry);
        S[i] = Student(n, ag, cgp,ctry);
        S[i].printData();
    }

    cout<<"----------Performing copy constructor-----------"<<endl;
    Student newStudent = S[0];
    newStudent.printData();
    return 0;
}
