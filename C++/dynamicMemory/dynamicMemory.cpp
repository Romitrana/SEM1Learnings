#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int n,*ptr;
cout<<"Enter the size of array :"<<endl;
cin>>n;
//malloc
ptr = (int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<":";
    cin>>*(ptr+i);
}
cout<<"-----Elements-----"<<endl;

for(int i=0;i<n;i++){
    cout<<*(ptr+i)<<endl;
}
return 0;
}

