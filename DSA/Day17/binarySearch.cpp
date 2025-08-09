// Median of two sorted Array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());

        int low=0,high=nums1.size()-1;
        double median=0;
        int n=nums1.size();

        if(n%2!=0) median=nums1[n/2];
        else median=(nums1[n/2]+nums1[(n/2)-1])/2.0;

        return median;
    }
};

int main(){

    int n1,n2;
    cin >> n1 >> n2;

    int x;

    vector<int> num1;
    for(int i=0;i<n1;i++){
        cin >> x;
        num1.push_back(x);
    }

    vector<int> num2;
    for(int i=0;i<n2;i++){
        cin >> x;
        num2.push_back(x);
    }

    Solution s1;
    cout << s1.findMedianSortedArrays(num1,num2);

    return 0;

}
