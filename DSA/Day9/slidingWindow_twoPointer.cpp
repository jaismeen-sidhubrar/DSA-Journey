// reverse form 0 to k
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<int> reverseTillK(vector<int> &arr,int k){
//   reverse(arr.begin(),arr.begin()+k+1);
//   return arr;
// }
// int main() {
//   int n;
//   cin >> n;
//   int k;
//   cin >> k;
//   vector<int> arr(n);
//   for (int i = 0; i < n; i++) cin >> arr[i];
//   vector<int> vec=reverseTillK(arr,k);
//   for(int i : vec) cout << i << " ";
//   return 0;
// }











// reverse from k to end
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<int> reverseTillK(vector<int> &arr,int k){
//   reverse(arr.begin()+k,arr.end());
//   return arr;
// }
// int main() {
//   int n;
//   cin >> n;
//   int k;
//   cin >> k;
//   vector<int> arr(n);
//   for (int i = 0; i < n; i++) cin >> arr[i];
//   vector<int> vec=reverseTillK(arr,k);
//   for(int i : vec) cout << i << " ";
//   return 0;
// }













// Sum of Subarray
// #include <iostream>
// using namespace std;
// bool isThere(int n,long long arr[],long long k){
//   long long sum = 0;
//   int start = 0;
//   for (int end = 0; end < n; end++) {
//     sum += arr[end];
//     while (sum > k && start <= end) {
//       sum -= arr[start];
//         start++;
//     }
//     if (sum == k) return true;
//   }
//   return false;
// }
// int main() {
//   int t;
//   cin >> t;
//   while(t--){
//     int n;
//     long long k;
//     cin >> n >> k;
//     long long arr[n];
//     for(int i=0;i<n;i++) cin >> arr[i];
//     if(isThere(n,arr,k)) cout << "Yes" << endl;
//     else cout << "No" << endl;
//   }
//   return 0;
// }






















// Maximum sum of subarray
#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k, vector<int> &arr) {
    int sum=0;
    for(int i=0;i<k;i++){
      sum+=arr[i];
    }
    int maxsum=sum;
    int idx=0;
    for(int i=k;i<n;i++){
      sum+=arr[i]-arr[idx++];
      if(sum>maxsum) maxsum=sum;
    }
    cout << maxsum << endl;
    
}

int main() {  
	int n, k;  cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	solve(n, k, arr);
}
