// Revision of Array & String 



// Average-of-all
// #include <iostream>
// using namespace std;
// int main() {
//     int N;
//     cin >> N;
    
//     int arr[N];
//     for(int i=0;i<N;i++) cin >> arr[i];
    
//     int sum=0;
//     for(int i=0;i<N;i++) sum+=arr[i];
    
//     int k=sum/N;
//     cout << k;
// }








// Smallest and Largest Of All
// #include <iostream>
// using namespace std;
// int main() {
//     int N;
//     cin >> N;
//     int arr[N];
//     for(int i=0;i<N;i++) cin >> arr[i];
    
//     int min=arr[0],max=arr[0];
//     for(int i=1;i<N;i++){
//       if(arr[i]>max) max=arr[i];
//       else if(arr[i]<min) min=arr[i];
//     }
//     cout << min << endl << max;
  
//     return 0;
// }













// Find Array and Minimum
// #include <iostream>
// #include <climits>  
// using namespace std;
// int main() {
//     int N,M;
//     cin >> N >> M;
//     int arr[N][M];
//     for(int i=0;i<N;i++){
//       for(int j=0;j<M;j++){
//         cin >> arr[i][j];
//       }
//     }
//     int min_diff=INT_MAX;
//     for(int i=0;i<N-1;i++){
//       for(int j=0;j<M;j++){
//         int A=arr[i][j];
//         for(int k=0;k<M;k++){
//           int B=arr[i+1][k];
//           if(A-B<min_diff && A-B>=0) min_diff=A-B;
//         }
//       }
//     }
//     cout << min_diff;
//     return 0;
// }












// Modify Array
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
//         if(i%2==0) arr[i]+=1;
//         else arr[i]+=2;
//       }
//       for(int i=0;i<N;i++) cout << arr[i] << " ";
//       cout << endl;
//     }
// }











// Roatation Of Array
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void rotateArray(vector<int> &arr, int k) {
//     int n = arr.size();
//     k = k % n;

//     reverse(arr.begin(), arr.end());             // Step 1
//     reverse(arr.begin(), arr.begin() + k);       // Step 2
//     reverse(arr.begin() + k, arr.end());         // Step 3
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n, k;
//         cin >> n >> k;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) cin >> arr[i];

//         rotateArray(arr, k);

//         for (int x : arr) cout << x << " ";
//         cout << endl;
//     }
//     return 0;
// }













// Merge Sorted Arrays
// #include <iostream>
// #include <vector>
// using namespace std;
// void mergeSortedArrays(vector<int> &A, vector<int> &B) {
//     vector<int> res;
//     res.insert(res.end(),A.begin(),A.end());
//     res.insert(res.end(),B.begin(),B.end());
//     for(int i=0;i<res.size();i++){
//       for(int j=i+1;j<res.size();j++){
//         if(res[i]>res[j]){
//           int temp=res[j];
//           res[j]=res[i];
//           res[i]=temp;
//         }
//       }
//     }
//     for(int i=0;i<res.size();i++) cout << res[i] << " ";
// }
// int main(){
//     int N;
//     cin >> N;
//     vector<int> A;
//     for(int i=0;i<N;i++){
//         int x;
//         cin >> x;
//         A.push_back(x);
//     }

//     int M;
//     cin >> M;
//     vector<int> B;
//     for(int i=0;i<M;i++){
//         int x;
//         cin >> x;
//         B.push_back(x);
//     }

//     mergeSortedArrays(A,B);
//     return 0;
// }













// 5 times consonants + 3 times number if vowels
// #include <iostream>
// using namespace std;
// int main(){
//   int N;
//   cin >> N;
//   int arr[N];
//   for(int i=0;i<N;i++) cin >> arr[i];
//   int c=0,v=0;
//   for(int i=0;i<N;i++){
//     arr[i]+=96;
//     int ch=char(arr[i]);
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') v+=1;
//     else c+=1;
//   }
//   int res=(5*c)+(3*v);
//   cout << res <<endl;
// }














// array pair sum
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int res[n/2];
    for(int i=0;i<n/2;i++){
        res[i]=arr[i]+arr[n-i-1];
      }
    for(int i=0;i<n/2;i++) cout << res[i] << " ";
}