#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enters elements : "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Array before sort"<<endl;
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
//bubble sort technique
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-(i+1);j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

cout<<endl<<"Array after sort"<<endl;
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
return 0;
}
