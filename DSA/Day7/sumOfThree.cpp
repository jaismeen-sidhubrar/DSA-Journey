#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> SumOfThree(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    for(int i=0;i<nums.size()-2;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int left=i+1;
        int right=nums.size()-1;

        while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            if(sum==0){
                res.push_back({nums[i],nums[left],nums[right]});
                while(left<right && nums[left]==nums[left+1]) left++;
                while(left<right && nums[right]==nums[right-1]) --right;
                left++;
                --right;
            }else if(sum>0){
                --right;
            }else{
                left++;
            } 
        }
    }
    return res;
}

int main(){
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
    vector<vector<int>> result = SumOfThree(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}