// Take out Maximum Sum
// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(int n, int k, vector<int> &arr) {
//     int sum=0;
//     for(int i=0;i<k;i++){
//       sum+=arr[i];
//     }
//     int maxsum=sum;
//     int idx=0;
//     for(int i=k;i<n;i++){
//       sum+=arr[i]-arr[idx++];
//       if(sum>maxsum) maxsum=sum;
//     }
//     cout << maxsum << endl;
    
// }

// int main() { 
// 	int n, k;  cin >> n >> k;
// 	vector<int> arr(n);
// 	for(int i = 0; i < n; i++) cin >> arr[i];
// 	solve(n, k, arr);
// }












// MinSum
// #include <iostream>
// using namespace std;

// int minSum(int n,int arr[],int k){
//   int minsum=0;
//   int sum=0;
//   for(int i=0;i<k;i++) sum+=arr[i];
//   minsum=sum;
//   int idx=0;
//   for(int i=k;i<n;i++){
//     sum+=arr[i]-arr[idx++];
//     if(sum<minsum) minsum=sum;
//   }
//   return minsum;
// }

// int main() {
//   int t;
//   cin >> t;
//   while(t--){
//     int n,k;
//     cin >> n >> k;
//     int arr[n];
//     for(int i=0;i<n;i++) cin >> arr[i];
//     cout << minSum(n,arr,k) << endl;
//   }
//   return 0;
// }


// Diversity
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int numberOfFamilies(int n,vector<int> arr,int k){
//   int maxCount=0;
//   n=arr.size();
//   sort(arr.begin(),arr.end());
//   int start=0,end=n-1;
//   for(int end=0;end<n;end++){
//     while(arr[end]-arr[start]>k) start++;
//     maxCount = max(maxCount, end - start + 1);
//   }
//   return maxCount;
// }
// int main() {
//   int t;
//   cin >> t;
//   while(t--){
//     int n,k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) cin >> arr[i];
//     cout << numberOfFamilies(n,arr,k) << endl;
//   }
//   return 0;
// }
























// Subarrats Having Sum less than M
#include <iostream>
using namespace std;

long long lessK(int n,int arr[],long long k){
  long long count=0 , sum=0;
  int i=0,j=0;
  while(j<n){
    sum+=arr[j];
    while(sum>=k && i<=j){
      sum-=arr[i];
      i++;
    }
    count+=(j-i+1);
    j++;
  }
  return count;
}

int main() {
    int t;
    cin >> t;
    while(t--){
      int n;
      long long k;
      cin >> n >> k;
      int arr[n];
      for(int i=0;i<n;i++) cin >> arr[i];
      cout << lessK(n,arr,k);
      cout << endl;
    }
    return 0;
}
