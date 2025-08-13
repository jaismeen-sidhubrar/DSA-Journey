// Code Implementation (C++)
#include <iostream>
#include <vector>
using namespace std;

// void merge(vector<int>& vec,int left,int mid,int right){
//     vector<int> temp(right-left+1);
//     int i=left,j=mid+1,k=0;

//     while(i<=mid && j<=right){
//         if(vec[i]<=vec[j]) temp[k++]=vec[i++];
//         else temp[k++]=vec[j++];
//     }

//     while(i<=mid) temp[k++]=vec[i++];
//     while(j<=right) temp[k++]=vec[j++];

//     for(i=0;i<k;i++) vec[left+i]=temp[i];
// }

// void mergeSort(vector<int>& vec,int left,int right){
//     if(left<right){
//         int mid=left+(right-left)/2;
//         mergeSort(vec,left,mid);
//         mergeSort(vec,mid+1,right);
//         merge(vec,left,mid,right);
//     }
// }

// int main() {
//     vector<int> arr = {98, 100, 402, 12, 27};
//     mergeSort(arr, 0, arr.size() - 1);
//     for (int num : arr) cout << num << " ";
//     return 0;
// }


























// Count Merges
// int count=0;

// void merge(vector<int>& vec,int left,int mid,int right){
//     vector<int> temp(right-left+1);
//     int i=left,j=mid+1,k=0;

//     while(i<=mid && j<=right){
//         if(vec[i]<vec[j]) temp[k++]=vec[i++];
//         else temp[k++]=vec[j++];
//     }

//     while(i<=mid) temp[k++]=vec[i++];
//     while(j<=right) temp[k++]=vec[j++];

//     for(i=0;i<k;i++) vec[left+i]=temp[i];
    
//     count++;
// }

// void mergeSort(vector<int>& vec,int left,int right){
//     if(left<right){
//         int mid=left+(right-left)/2;
//         mergeSort(vec,left,mid);
//         mergeSort(vec,mid+1,right);
//         merge(vec,left,mid,right);
//     }
// }

// int main() {
//     vector<int> arr = {64, 34, 25, 12, 22};
//     mergeSort(arr, 0, arr.size() - 1);
//     cout << count << endl;
//     return 0;
// }




















// Sort Array of Strings by Length in ascending order
void merge(vector<string>& vec,int left,int mid,int right){
    vector<string> temp(right-left+1);
    int i=left,j=mid+1,k=0;

    while(i<=mid && j<=right){
        if(vec[i].length()<=vec[j].length()) temp[k++]=vec[i++];
        else temp[k++]=vec[j++];
    }

    while(i<=mid) temp[k++]=vec[i++];
    while(j<=right) temp[k++]=vec[j++];

    for(i=0;i<k;i++) vec[left+i]=temp[i];
    
}

void mergeSort(vector<string>& vec,int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergeSort(vec,left,mid);
        mergeSort(vec,mid+1,right);
        merge(vec,left,mid,right);
    }
}

int main() {
    vector<string> arr = {"jaismeen","gurleen","puneetpal","sukhmanjot"};
    mergeSort(arr, 0, arr.size() - 1);
    for(int i=0;i<arr.size();i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
