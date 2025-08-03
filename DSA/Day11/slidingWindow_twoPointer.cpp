// countEvenSumSubarrays
// #include <iostream>
// #include <vector>
// using namespace std;

// long long countEvenSumSubarrays(const vector<int>& arr) {
//     long long even = 1; 
//     long long odd = 0;
//     long long count = 0;
//     long long prefix = 0;

//     for (int num : arr) {
//         prefix += num;

//         if (prefix % 2 == 0) {
//             count += even;
//             even++;
//         } else {
//             count += odd;
//             odd++;
//         }
//     }

//     return count;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << countEvenSumSubarrays(arr) << endl;

//     return 0;
// }






















// longestSubarrayWithSumAtMostK
// #include <iostream>
// #include <vector>
// using namespace std;

// int longestSubarrayWithSumAtMostK(vector<int>& arr, int n, int k) {
//     int start = 0, sum = 0, maxLen = 0;

//     for (int end = 0; end < n; end++) {
//         sum += arr[end];

//         while (sum > k) {
//             sum -= arr[start];
//             start++;
//         }

//         maxLen = max(maxLen, end - start + 1);
//     }

//     return maxLen;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         cout << longestSubarrayWithSumAtMostK(arr, n, k) << endl;
//     }

//     return 0;
// }




















// Longest Repeated Vowel
#include <iostream>
using namespace std;

bool vowel(char ch){
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
  return false;
}
int longVowel(string str){
  int count=0;
  for(int i=0;i<str.length();){
    int c=0;
    if(vowel(str[i])){
      c++;
      for(int j=i+1;j<str.length();j++){
        if(vowel(str[j]) && str[i]==str[j]) c++;
        else break;
      }
    }
    if(c>count){
      count=c;
      i+=count;
    }else i++;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  cin.ignore();
  string str;
  getline(cin,str);
  cout << longVowel(str);
  return 0;
}