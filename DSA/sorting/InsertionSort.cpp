
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
//insertion sort technique
for(int i=1;i<n;i++){
    int temp = arr[i];
    int j=i-1;
    for(;j>=0;j--){
        if(arr[j]>temp){
            //shift
            arr[j+1] = arr[j];
        }else{
            break;
        }
    }
    arr[j+1] = temp;
}

cout<<endl<<"Array after sort"<<endl;
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
return 0;
}
