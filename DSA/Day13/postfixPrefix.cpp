// Problems with prefix/postfix



// range sum queries
// #include <iostream>
// using namespace std;
// int rangeSum(int n,int arr[],int start,int end){
//     int prefix[n];
//     int i=0;
//     int sum=0;
//     while(i<n){
//         sum+=arr[i];
//         prefix[i++]=sum;
//     }
//     int res=prefix[end]-prefix[start]+arr[start];
//     return res;
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin >> arr[i];
//     int start,end;
//     cin >> start >> end;
//     cout << rangeSum(n,arr,start,end);
//     return 0;
// }










// Subarray sum equals k
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int numOfSubArray(int n,int arr[],int k){
//     unordered_map<int,int> prefixCount;
//     int sum=0;
//     int count=0;
//     prefixCount[0]=1;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         if(prefixCount.find(sum-k)!=prefixCount.end()) count+=prefixCount[sum-k];
//         prefixCount[sum]++;
//     }
//     return count;
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin >> arr[i];
//     int k;
//     cin >> k;
//     cout << numOfSubArray(n,arr,k);
//     return 0;
// }















// find equilibrium index
#include <iostream>
using namespace std;
int equilibriumIndex(int n, int arr[]){
    int totalSum = 0;
    for (int i = 0; i < n; i++) totalSum += arr[i];

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum)
            return arr[i];
        leftSum += arr[i];
    }
    
    return -1;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << equilibriumIndex(n,arr);
    return 0;
}
