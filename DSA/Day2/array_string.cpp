// Find sum of array using pointers
// #include <iostream>
// using namespace std;

// int sumOfArray(int *arr, int n) {
//     // Your code here
//     int sum=0;
//     for(int i=0;i<n;i++) sum+=*(arr+i);
//     cout << sum;
//     return sum;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     sumOfArray(arr, n);
//     return 0;
// }







// Revserse an array using pointer
// #include <iostream>
// using namespace std;

// void reverseArray(int *arr, int n) {
//     for(int i=0;i<n/2;i++){
//       int temp=*(arr+i);
//       *(arr+i)=*(arr+(n-1-i));
//       *(arr+(n-1-i))=temp;
//     }
//     for(int i=0;i<n;i++) cout << arr[i] << " ";
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     reverseArray(arr, n);
//     return 0;
// }











// Find duplicate
// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++) cin >> arr[i];
//   for(int i=0;i<n;i++){
//     int count=0;
//     for(int j=0;j<n;j++){
//       if(arr[i]==arr[j]) count+=1;
//     }
//     if(count>=2){
//       cout << arr[i];
//       break;
//     }
//   }
// }













// Anagram
// #include <iostream>
// using namespace std;
// bool isSpace(string s){
//   bool space=false;
//   for(int i=0;i<s.length();i++){
//     if(s[i]==' ') space=true;
//   }
//   if(space) return true;
//   else return false;
// }
// bool isAnagram(string s1,string s2){
//   if(s1.length()!=s2.length() || isSpace(s1) || isSpace(s2)) return false;
//   else{
//     bool anagram=true;
//     for(int i=0;i<s1.length();i++){
//       bool check=false;
//       for(int j=0;j<s2.length();j++){
//         if(s1[i]==s2[j]) check=true;
//       }
//       if(!check) anagram=false;
//     }
//     if(!anagram) return false;
//     else return true;
//   }
// }
// int main() {
//   string s1,s2;
//   getline(cin,s1);
//   getline(cin,s2);
//   if(isAnagram(s1,s2)) cout << "Output: true";
//   else cout << "Output: false";
//   return 0;
// }











// Check Missing Integer
// #include <iostream>
// using namespace std;

// int main() {
//     int x, sum = 0, count = 0;
//     while (cin >> x) {
//         sum += x;
//         count++;
//     }

//     int n = count + 1;
//     int total = n * (n + 1) / 2;
//     int missing = total - sum;

//     cout << missing << endl;
//     return 0;
// }












// Remove Duplicate
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//    int x;
//    vector<int> vec;
//    while(cin >> x){
//      vec.push_back(x);
//    }
//    for(int i=vec.size()-1;i>1;i--){
//      if(vec[i]==vec[i-1] && vec[i]==vec[i-2]){
//        vec.erase(vec.begin()+i);
//      }
//    }
//    for(int i=0;i<vec.size();i++) cout << vec[i] << " ";
//    cout << endl;
//    cout << vec.size();
// }















// Find Array and Minimum
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<vector<int>> mat;

bool isPossible(int diff) {
    vector<int> prev = mat[0];

    for (int i = 1; i < N; ++i) {
        vector<int> curr;
        int p1 = 0, p2 = 0;
        while (p1 < prev.size() && p2 < M) {
            if (abs(prev[p1] - mat[i][p2]) <= diff) {
                curr.push_back(mat[i][p2]);
                p2++;
            } else if (prev[p1] < mat[i][p2]) {
                p1++;
            } else {
                p2++;
            }
        }
        if (curr.empty()) return false;
        prev = curr;
    }
    return true;
}

int main() {
    cin >> N >> M;
    mat.resize(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> mat[i][j];
        }
        sort(mat[i].begin(), mat[i].end());
    }

    int left = 0, right = 1e9, ans = right;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (isPossible(mid)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}