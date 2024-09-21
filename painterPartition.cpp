#include <iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int painterCount = 1;
    int wallSum = 0;

    for(int i = 0; i<n; i++){
        if(wallSum + arr[i] <= mid){
            wallSum += arr[i];
        }else{
            painterCount++;
            if(painterCount>m || arr[i] > mid){
                return false;
            }
            wallSum = arr[i];
        }
        if(painterCount>m){
        return false;
    }   
    }

    return true;

}

int painterPartition(vector<int> arr, int n, int m){
    int start = 0;
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
  
    int n, m;
    cin >> n >> m;
    vector<int> time(n);
    for(int i = 0; i< n; i++){
        cin >> time[i];
    }
    cout << painterPartition(time, n, m) << endl;
    
    return 0;
}