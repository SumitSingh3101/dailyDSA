#include<iostream>
using namespace std;

void addPrevious(int arr[], int n){
    int brr[n];
    brr[0] = arr[0];
    cout<<"[ ";
    cout<<arr[0]<<" ";
    for(int i = 1; i<n; i++ ){
        brr[i] = brr[i-1] + arr[i]; 
        cout<< brr[i]<<" ";

    }
    cout<<"]"<<endl;

    

}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the " << i+1 << " Element :";
        cin>> arr[i];
    }

    addPrevious(arr,n);

}
