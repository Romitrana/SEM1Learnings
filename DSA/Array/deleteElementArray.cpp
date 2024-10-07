
#include<iostream>
using namespace std;
int main(){
int n,pos;
cout<<"Enter array size : ";
cin>>n;
int arr[n];
cout<<"---------Enter "<<n<<" element----------"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Array before deletion"<<endl;
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
cout<<endl<<"Enter position to delete : ";
cin>>pos;
if(pos > n || pos <=0){
    cout<<"---------Enter valid position----------"<<endl;
    return 0;
}
int j = pos-1;
int k=n-1;
while(j!=k){
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1]=temp;
    j++;
}
arr[j] = 0;
n=n-1;
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
return 0;
}
