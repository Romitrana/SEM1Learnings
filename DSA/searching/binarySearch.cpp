#include<iostream>
using namespace std;
int binarySearch(int*,int,int);

int main(){
int arr[] = {2,5,7,9,10,24,31,54,67,99,201};
int len = sizeof(arr)/sizeof(arr[0]);
int target;

cout<<"Enter the search element"<<endl;
cin>>target;

int const answer = binarySearch(arr,len,target);

if(answer!=-1){
    cout<<"Element found at index "<<answer<<endl;
}else{
    cout<<"Element searched element does not exist"<<endl;
}
return 0;
}


int binarySearch(int ar[],int n, int searchele){
int low = 0;
int high = n-1;

while(low<=high){
int mid = low + (high-low)/2;
if(ar[mid]==searchele){
    return mid;
}else if(searchele<ar[mid]){
high = mid-1;
}else{
low = mid +1;
}
}

return -1;
}
