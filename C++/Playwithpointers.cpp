#include<iostream>
using namespace std;
void arraySquare(int*,int);
int main()
{
    int *arr[5];
    cout<<"Address of array : "<<arr<<endl; //1
    //cout<<"value at index 0 : "<<*arr<<endl;
//cout<<"increament :"<<*(arr+1)<<endl; //address increase by 4 bytes then points to 2 at index 1
   // cout<<"decreament : "<<*(arr-1)<<endl; //some garbage value

    /*for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<*(arr+i)<<endl;//1 2 3 4 5
        cout<<i[arr]<<endl; //1 2 3 4 5
    }*/
    arraySquare(arr,(sizeof(arr)/sizeof(arr[0])));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

void arraySquare(int arr[],int n){
for(int i=0;i<n;i++){
    *(arr+i) = arr[i] * arr[i];
}
}
