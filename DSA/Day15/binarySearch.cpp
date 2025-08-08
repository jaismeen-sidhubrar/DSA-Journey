// Binary Search LeetCode Questions:-




// binary search

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int low=0,high=nums.size()-1;
//         while(low<=high){
//             int mid=(high+low)/2;
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]<target) low=mid+1;
//             else high=mid-1;
//         }
//         return -1;
//     }
// };












// first bad version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// class Solution {
// public:
//     int firstBadVersion(int n) {
//         int low = 1, high = n;
//         while (low < high) {
//             int mid = low + (high - low) / 2;
//             if (isBadVersion(mid)) high = mid; 
//             else  low = mid + 1; 
//         }
//         return low;
//     }
// };












// Search in rotated Sorted array

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int low = 0, high = nums.size() - 1;
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (nums[mid] == target) return mid;
//             if (nums[low] <= nums[mid]) {
//                 if (nums[low] <= target && target < nums[mid]) high = mid - 1;
//                 else low = mid + 1;
//             }
//             else {
//                 if (nums[mid] < target && target <= nums[high]) low = mid + 1;
//                 else high = mid - 1;
//             }
//         }
//         return -1; 
//     }
// };





