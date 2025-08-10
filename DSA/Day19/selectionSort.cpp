// Selection Sort:

#include <iostream>
#include <vector>
using namespace std;




// simple code implementation
// void selectionSort(vector<int>& arr){
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex]) minIndex=j;
//         }
//         swap(arr[i],arr[minIndex]);
//     }
// }
// int main() {
//     vector<int> arr = {64, 34, 25, 12, 22};
//     selectionSort(arr);
//     for (int num : arr) cout << num << " ";
//     cout << endl;
//     return 0;
// }














// Descending order
// void descendingOrder(vector<int>& arr){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int idx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[idx]<arr[j]) idx=j;
//         }
//         swap(arr[i],arr[idx]);
//     }
// }
// int main() {
//     vector<int> arr = {64, 34, 25, 12, 22};
//     descendingOrder(arr);
//     for (int num : arr) cout << num << " ";
//     cout << endl;
//     return 0;
// }
















// Find k-th Smallest Element
// int kthSmallest(vector<int>& arr, int k) {
//     int n = arr.size();
//     for (int i = 0; i < k; i++) {
//         int minIdx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIdx])
//                 minIdx = j;
//         }
//         swap(arr[i], arr[minIdx]);
//     }
//     return arr[k - 1]; 
// }
// int main() {
//     int k;
//     cin >> k;
//     vector<int> arr = {64, 34, 25, 12, 22};
//     kthSmallest(arr,k);
//     for (int num : arr) cout << num << " ";
//     cout << endl;
//     return 0;
// }
















// Count Number of Swaps
int selectionSortCountSwaps(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        if (minIdx != i) {
            swap(arr[i], arr[minIdx]);
            swapCount++;
        }
    }
    return swapCount;
}
int main() {
    vector<int> arr = {64, 34, 25, 12, 22};
    selectionSortCountSwaps(arr);
    for (int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}
