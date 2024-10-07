//factorial of a number

#include<iostream>
using namespace std;
int fact(int);


int fact(int n){

if(n==1){
return 1;
}

return n*fact(n-1);
}

int main(){
int n;
cout<<"enter value for n : ";
cin>>n;
int ans = fact(n);
cout<<"Factorial of "<<n<<"="<<ans<<endl;
return 0;
}
