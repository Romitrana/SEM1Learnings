#include<iostream>
#include<string>
using namespace std;
//call by recursion
int print(int n,int i){
cout<<" "<<i;
//base condition
if(i==n){
    return i;
}
i=i+1;
print(n,i);
}
int main()
{
  int num;
  cout<<"Enter a number = "<<endl;
  cin>>num;
  print(num,1);
return 0;
}
