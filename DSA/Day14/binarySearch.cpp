// Binary Search
#include <iostream>
#include <vector>
using namespace std;


//  Find First Occurrence of an Element
// int firstOccurrence(vector<int>& arr, int target) {
//     int low = 0, high = arr.size() - 1, result = -1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (arr[mid] == target) {
//             result = mid;
//             high = mid - 1;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return result;
// }
// int main(){
//     int n;
//     cin >> n;
//     int k;
//     cin >> k;
//     vector<int> arr;
//     int x;
//     while(cin >> x){
//         cin >> x;
//         arr.push_back(x);
//     }
//     cout << firstOccurrence(arr,k);
// }


















// Find Floor of Square Root
// int sqrtFloor(int x) {
//     int low = 0, high = x, ans = -1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if ((long long)mid * mid <= x) {
//             ans = mid;
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << sqrtFloor(n);
// }
















// Find Any Peak Element
// int findPeakElement(vector<int>& arr) {
//     int low = 0, high = arr.size() - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
//             (mid == arr.size() - 1 || arr[mid + 1] <= arr[mid]))
//             return arr[mid];
//         else if (mid > 0 && arr[mid - 1] > arr[mid])
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr;
//     int x;
//     while(cin >> x){
//         cin >> x;
//         arr.push_back(x);
//     }
//     cout << findPeakElement(arr);
// }
























// Minimum in Rotated Sorted Array
int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return arr[low];
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    int x;
    while(cin >> x){
        cin >> x;
        arr.push_back(x);
    }
    cout << findMin(arr);
}
