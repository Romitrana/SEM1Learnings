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
//Selection sort technique
for(int i=0;i<n-1;i++){ //round n-1
    int minindex = i;
    for(int j=i+1;j<n;j++){ //finding min element
        if(arr[j]<arr[minindex]){
            minindex = j; //got index of min element
        }
    }
    if(minindex!=i){
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
        //we could also have used swap(arr[minindex,arr[i])
    }
}

cout<<endl<<"Array after sort"<<endl;
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
return 0;
}

