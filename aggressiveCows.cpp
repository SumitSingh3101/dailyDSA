#include<vector>
#include<iostream>
using namespace std;

int isPossible(vector<int> &stalls, int k, int mid, int n){
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i = 0; i<n; i++){
        if(stall[i]-lastPos>=mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = stall[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int n = stalls.size();
    int end=stalls[n-1];
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(isPossible(stalls, k, mid, n)){
            ans = mid;
            start= mid +1;
        }else{
            end = mid -1
        }
        mid = start + (end - start)/2;
    }
    return ans;

}