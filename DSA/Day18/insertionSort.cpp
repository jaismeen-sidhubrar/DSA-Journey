// Insertion Sort 

#include <iostream>
#include <vector>
using namespace std;




// simple code implementation
// void insertionSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j]; 
//             j--;
//         }
//         arr[j + 1] = key; 
//     }
// }
// int main() {
//     vector<int> arr = {64, 34, 25, 12, 22};
//     insertionSort(arr);
//     for (int num : arr) cout << num << " ";
//     return 0;
// }














// Find k-th Smallest Element 
// int kthSmallest(int arr[], int n, int k) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//         if (i == k - 1) return arr[i];
//     }
//     return -1; 
// }
// int main() {
//     int n, k;
//     cin >> n >> k;
//     int arr[n] = {64, 34, 25, 12, 22};
//     kthSmallest(arr,n,k);
//     for (int num : arr) cout << num << " ";
//     return 0;
// }
















//  Count Number of Shifts
// int countShifts(int arr[], int n) {
//     int shifts = 0;
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//             shifts++;
//         }
//         arr[j + 1] = key;
//     }
//     return shifts;
// }
// int main() {
//     int n;
//     cin >> n ;
//     int arr[n] = {64, 34, 25, 12, 22};
//     cout << countShifts(arr,n);
//     return 0;
// }
















// Find Rotation Count in Rotated Sorted Array
int findRotationCount(int arr[], int n) {
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }
    return minIndex;
}
int main() {
    int n;
    cin >> n ;
    int arr[n] = {64, 34, 25, 12, 22};
    cout << findRotationCount(arr,n);
    return 0;
}