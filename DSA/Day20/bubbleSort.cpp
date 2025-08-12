// Bubble Sort

// code implementation
// #include <iostream>
// #include <vector>
// using namespace std;

// void bubbleSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++) {
//         bool swapped = false;
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (!swapped) break; 
//     }
// }

// int main() {
//     vector<int> arr = {64, 34, 25, 12, 22};
//     bubbleSort(arr);
//     cout << "Sorted array: ";
//     for (int num : arr) cout << num << " ";
//     cout << std::endl;
//     return 0;
// }
















// find number of swaps in bubble sort
// #include<iostream>
// using namespace std;

// int numOfSwaps(int n,int arr[]){
//     int count=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         for(int i=0;i<n;i++) cin >> arr[i];
//         cout << numOfSwaps(n,arr) << endl;
//     }
//    return 0;
// }

















// Sort a String Alphabetically
#include <iostream>
using namespace std;

string sortByAlpha(string &str){
    int n = str.length();
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << sortByAlpha(str);
    return 0;
}
