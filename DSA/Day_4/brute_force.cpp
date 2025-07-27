// New York Skylines
// #include <iostream>
// using namespace std;
// int main() {
//     int T;
//     cin >> T;
    
//     while(T--){
//       int N;
//       cin >> N;
//       int arr[N];
//       for(int i=0;i<N;i++) cin >> arr[i];
      
//       for(int i=0;i<N;i++){
//         if(i!=0 && i!=N-1){
//           if(arr[i]>arr[i+1] && arr[i]>arr[i-1]) cout << 2;
//           else if(arr[i]>arr[i+1] || arr[i]>arr[i-1]) cout << 1;
//           else cout << 0;
//         }else if(i==0){
//           if(arr[i]>arr[i+1]) cout << 1;
//           else cout << 0;
//         }else{
//           if(arr[i]>arr[i-1]) cout << 1;
//           else cout << 0;
//         }
//         cout << " ";
//       }
      
//       cout << endl;
//     }
// }
























// Even Boundaries
// #include <iostream>
// using namespace std;
// int main() {
//     int N;
//     cin >> N;
//     int arr[N];
//     for(int i = 0; i < N; i++) cin >> arr[i];

//     int count = 0;

//     for(int i = 0; i < N; i++) {
//         for(int j = i; j < N; j++) {
//             if (abs(arr[i] - arr[j]) % 2 == 0) {
//                 count++;
//             }
//         }
//     }

//     cout << count;
//     return 0;
// }



















// Cipher String
// #include <iostream>
// using namespace std;
// void solve(int N, const string& s) {
//     string res="";
//     for(int i=0;i<N;){
//       int count=0;
//       for(int j=i;j<N;j++){
//         if(s[i]==s[j]) count++;
//         else break;
//       }
//       res+=s[i];
//       res+=to_string(count);
//       i+=count;
//     }
    
//     for(int i=0;i<res.length();i++) cout << res[i];
//     cout << endl;
// }
// int main(){
//     int N;
//     cin >> N;
//     string s;
//     getline(cin,s);
//     solve(N,s);
//     return 0;
// }













// Faulty Direction
// #include <iostream>
// using namespace std;
// int main() {
//   int T;
//   cin >> T;
  
//   while(T--){
//     int N;
//     cin >> N;
    
//     string str;
//     cin >> str;
    
    
//     int x=0,y=0;
    
//     for(int i=0;i<N;i++){
//       if(str[i]=='R') x+=1;
//       else if(str[i]=='L') x-=1;
//       else if(str[i]=='U') y+=1;
//       else y-=1;
//     }
    
//     if(x==0 && y==0) cout << "Yes" << endl;
//     else cout << "No" << endl ;
//   }
// } 



















// Sum of special Pairs
// #include <iostream>
// using namespace std;
// bool isPrime(int num){
//   if(num<=1) return false;
//   for(int i=2;i<num;i++){
//     if(num%i==0) return false;
//   }
//   return true;
// }
// int main() {
//   int N;
//   cin >> N;
//   int arr[N];
//   for(int i=0;i<N;i++) cin >> arr[i];
  
//   int sum=0;
//   for(int i=0;i<N;i++){
//     for(int j=i+1;j<N;j++){
//       int diff=j-i;
//       if(isPrime(diff)){
//         sum+=abs(arr[j]-arr[i]);
//       }
//     }
//   }
  
//   cout << sum;
//   return 0;
// }















// Palindromic string
// #include <iostream>
// using namespace std;

// bool isPalindrome(string s, int start, int end) {
//     while (start < end) {
//         if (s[start] != s[end])
//             return false;
//         start++;
//         end--;
//     }
//     return true;
// }

// int main() {
//     string s;
//     cin >> s;
//     int maxLen = 1;

//     for (int i = 0; i < s.length(); i++) {
//         for (int j = i; j < s.length(); j++) {
//             if (isPalindrome(s, i, j)) {
//                 int len = j - i + 1;
//                 if (len > maxLen)
//                     maxLen = len;
//             }
//         }
//     }

//     cout << maxLen;
//     return 0;
// }























// Some Basic Maths
#include <iostream>
#include <climits>
using namespace std;
int main() {
  int N;
  cin >> N;
  int arr[N];
  for(int i=0;i<N;i++) cin >> arr[i];
  
  int sum=0;
  for(int i=0;i<N;i++) sum+=arr[i];
  
  int min=INT_MAX,idx=-1;
  for(int i=0;i<N;i++){
    int res=sum-arr[i];
    if(res%7==0 && arr[i]<min){
      min=arr[i];
      idx=i;
    }
  }
  
  cout << idx << endl;
  return 0;
}