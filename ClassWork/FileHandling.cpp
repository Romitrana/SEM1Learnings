//C++ program to write and read values using variables in/from file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
char message[30];
fstream file;
file.open("D:\\CppFilesdemo1.txt",ios::out);
if(!file)
{
cout<<"Error in creating file.."<<endl;
return 0;
}
cout<<"\nFile created successfully."<<endl;
cout<<"Enter your String: ";
cin.getline(message,30);
file<<message<<endl;
file.close();
cout<<"\nFile saved and closed succesfully."<<endl;

file.open("D:\\CppFilesdemo1.txt",ios::in);
if(!file){
cout<<"Error in opening file..";
return 0;
}
file.getline(message, 30);
file.close();
cout<<"String : "<<message<<endl;

cout<<"------------Number of Vowels-------------"<<endl;
int count=0;
for(int i=0;i<sizeof(message)/sizeof(message[0]);i++){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
}
cout<<count<<endl;
return 0;
}
