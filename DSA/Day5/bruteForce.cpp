// Count pairss with sum=k
// #include <iostream>
// using namespace std;
// int main() {
//   int N,K;
//   cin >> N >> K;
//   int A[N];
//   for(int i=0;i<N;i++) cin >> A[i];
  
//   int count=0;
//   for(int i=0;i<N;i++){
//     for(int j=i+1;j<N;j++){
//       if(A[i]+A[j]==K) count++;
//     }
//   }
  
//   cout << count << endl;
//   return 0;
// }











// Identify Prime
// #include <iostream>
// using namespace std;
// int identifyPrime(int num) {
//   for(int i=2;i<num;i++){
//     if(num%i==0){
//       return 0;
//     }
//   }
//   return 1;
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << identifyPrime(n);
//     return 0;
// }












// Sum of subarray
// #include <iostream>
// #include <unordered_set>
// using namespace std;

// bool hasSubarrayWithSumK(int arr[], int n, long long k) {
//     unordered_set<long long> prefixSums;
//     long long sum = 0;
//     prefixSums.insert(0); 

//     for (int i = 0; i < n; ++i) {
//         sum += arr[i];
//         if (prefixSums.find(sum - k) != prefixSums.end())
//             return true;
//         prefixSums.insert(sum);
//     }
//     return false;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         long long k;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; ++i)
//             cin >> arr[i];

//         if (hasSubarrayWithSumK(arr, n, k))
//             cout << "Yes\n";
//         else
//             cout << "No\n";
//     }
//     return 0;
// }


















// Anagram Detector
// #include <iostream>
// using namespace std;
// int main() {
//   string s1,s2;
//   getline(cin,s1);
//   getline(cin,s2);
  
  
//   int freq1[256] = {0}, freq2[256] = {0};
//     for (char ch : s1){
//       if(ch!=' ') freq1[ch]++;
//     }
//     for (char ch : s2){
//       if(ch!=' ') freq2[ch]++;
//     }

//   for (int i = 0; i < 256; i++) {
//     if (freq1[i] != freq2[i]) {
//       cout << "False" << endl;
//       return 0;
//     }
//   }

//   cout << "True" << endl;
//   return 0;
// }















// String Cut
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//   string s;
//   getline(cin,s);
  
//   if(s.length()%2==0){
//     reverse(s.begin(),s.begin()+(s.length()/2));
//     reverse(s.begin()+(s.length()/2),s.end());
//     for(int i=0;i<s.length();i++) cout << s[i];
//   }else{
//     reverse(s.begin(),s.begin()+(s.length()/2));
//     reverse(s.begin()+(s.length()/2)+1,s.end());
//     for(int i=0;i<s.length();i++) cout << s[i];
//   }
// }













// Sachin Fan
// #include <iostream>
// using namespace std;
// int main() {
//   int N;
//   cin >> N;
//   int arr[N];
//   for(int i=0;i<N;i++) cin >> arr[i];
  
//   int count=0;
//   for(int i=0;i<N;i++){
//     for(int j=i;j<N;j++){
//       bool isthere=false;
//       for(int k=i;k<=j;k++){
//         if(arr[k]==10){
//           isthere=true;
//           break;
//         }
//       }
//       if(isthere) count++;
//     }
//   }
  
//   cout << count;
// }

















// Sub Array Quest
#include <iostream>
using namespace std;
int main() {
  int T;
  cin >> T;
  
  while(T--){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) cin >> arr[i];
    
    int count=0;
    for(int i=0;i<N;i++){
      if(arr[i]%2!=0){
        for(int j=i;j<N;j++){
          if(arr[j]%2!=0) count++;
        }
      }
    }
    
    cout << count << endl;
    
  }
}