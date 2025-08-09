// Find Min in array rotated by k 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        int minimum=arr[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<=arr[low] && arr[mid]<=arr[high] && arr[mid]<=minimum) minimum=arr[mid];
            if(arr[mid]<arr[high]){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return minimum;
    }
};

int main(){
    vector<int> arr;
    int x;
    while(cin >> x){
        arr.push_back(x);
    }
    Solution s1;
    s1.findMin(arr);
    return 0;
}