#include<iostream>
#include<fstream>
using namespace std;
int main(){
int length=20;

//writing file
ofstream fout;
fout.open("D:\\CppFileDemo2.txt",ios::app);
if(!fout){
    cout<<"Unable to open file"<<endl;
    return 0;
}
char ch;
cout<<"Enter some characters :"<<endl;
for(int i=0;i<length;i++){
    cin>>ch;
    fout.put(ch);
}
fout.close();

//reading file
ifstream fin;
fin.open("D:\\CppFileDemo2.txt");
if(!fin){
    cout<<"Unable to open and read file"<<endl;
    return 0;
}
cout<<"SuccessFully read All characters :"<<endl;
int count =0;
while (fin.get(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        cout << ch;
    }
cout<<endl<<"Number of Vowels = "<<count<<endl;
fin.close();
return 0;
}
