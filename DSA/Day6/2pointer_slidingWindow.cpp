// Array Pair Sum
// #include <iostream>
// using namespace std;

// void sumOfStartEnd(int arr[],int N){
//   int start=0,end=N-1;
//   int res[N/2];
//   while(start<end){
//     int sum=arr[start]+arr[end];
//     res[start]=sum;
//     start++;
//     end--;
//   }
//   for(int i=0;i<(N/2);i++) cout << res[i] << " ";
// }
// int main() {
//   int N,arr[N];
//   cin >> N;
//   for(int i=0;i<N;i++) cin >> arr[i];
//   sumOfStartEnd(arr,N);
//   cout << endl;
// }















// Array Pair SUM with 2 pointer on 2 differnt array
// #include <iostream>
// using namespace std;

// void sumOfStartEnd(int arr[],int N){
//   int start=0,end=N-1;
//   int res[N/2];
//   while(start<end){
//     int sum=arr[start]+arr[end];
//     res[start]=sum;
//     start++;
//     end--;
//   }
//   for(int i=0;i<(N/2);i++) cout << res[i] << " ";
// }
// int main() {
//   int N,arr[N];
//   cin >> N;
//   for(int i=0;i<N;i++) cin >> arr[i];
//   sumOfStartEnd(arr,N);
//   cout << endl;
// }


















// check if there are 2 numbers whose sum is equal to k
// #include <iostream>
// using namespace std;

// void sumOfStartEnd(int arr[],int N){
//   int start=0,end=N-1;
//   int res[N/2];
//   while(start<end){
//     int sum=arr[start]+arr[end];
//     res[start]=sum;
//     start++;
//     end--;
//   }
//   for(int i=0;i<(N/2);i++) cout << res[i] << " ";
// }
// int main() {
//   int N,arr[N];
//   cin >> N;
//   for(int i=0;i<N;i++) cin >> arr[i];
//   sumOfStartEnd(arr,N);
//   cout << endl;
// }














#include <iostream>
#include <algorithm>
using namespace std;
int checkSum(int N,int arr[],int k){
  sort(arr,arr+N);
  int i=0,j=N-1;
  while(i<j){
    int sum=arr[i]+arr[j];
    if(sum==k) return 1;
    else if(sum>k) j--;
    else i++;
  }
  return -1;
}
int main() {
  int t;
  cin >> t;
  
  while(t--){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << checkSum(n,arr,k);
    cout << endl;
  }
}