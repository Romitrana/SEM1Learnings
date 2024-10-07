#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int n,pos,ele;
cout<<"Enter the size of array"<<endl;
cin>>n;
int* arr = (int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>*(arr+i);
}
cout<<endl<<"Your array looks like"<<endl;
for(int i=0;i<n;i++){
    cout<<" "<<*(arr+i);
}
cout<<endl<<"Enter element to be inserted"<<endl;
cin>>ele;
cout<<"Enter position where you want to insert element"<<endl;
cin>>pos;
if(pos > n || pos < 0){
    cout<<"---------Enter valid position----------"<<endl;
    return 0;
}
n=n+1;
arr = (int*)realloc(arr,n*sizeof(int));
int j = pos-1;
int k = n-1;
while(k>j){
int item = *(arr+k-1);
*(arr+k) = item;
k--;
}
*(arr+k)=ele;
cout<<"Your array looks like after insert"<<endl;
for(int i=0;i<n;i++){
    cout<<" "<<*(arr+i);
}
return 0;
}
