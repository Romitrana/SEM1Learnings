#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int* ,int*);
//void swap(int,int);
int main(){
int a = 10;
int b = 20;
cout<<"----call by reference-----"<<endl;
cout<<"Before swap"<<endl;
cout<<"A = "<<a<<endl;
cout<<"B = "<<b<<endl;
swap(&a,&b);
//swap(a,b);
cout<<"After swap"<<endl;
cout<<"A = "<<a<<endl;
cout<<"B = "<<b<<endl;
return 0;
}

/*void swap(int* x,int* y){
int temp = y;  //20
y = x;
x = temp;
}*/

void swap(int* x,int* y){
int temp = *y;  //20
*y = *x;
*x = temp;
}
