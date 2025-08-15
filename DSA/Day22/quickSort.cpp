#include <iostream>
#include <vector>
using namespace std;






// Code Implementation:-

// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[high]; 
//     int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (arr[j] <= pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1; 
// }

// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int p = partition(arr, low, high);
//         quickSort(arr, low, p - 1); // Sort left side
//         quickSort(arr, p + 1, high); // Sort right side
//     }
// }

// int main() {
//     vector<int> arr = {64, 34, 25, 12, 22};
//     quickSort(arr, 0, arr.size() - 1);
//     for (int num : arr) cout << num << " ";
//     return 0;
// }
















// print the number of comparisons and swaps made.
int comparisons = 0, swapsCount = 0;

int partitionArray(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        comparisons++;
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
            swapsCount++;
        }
    }
    swap(arr[i + 1], arr[high]);
    swapsCount++;
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int par = partitionArray(arr, low, high);
        quickSort(arr, low, par - 1);
        quickSort(arr, par + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    quickSort(arr, 0, n - 1);
    cout << comparisons << endl;
    cout <<swapsCount << endl;
}
