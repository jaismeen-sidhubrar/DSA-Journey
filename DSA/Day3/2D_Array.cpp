// Vowels in Row
// #include <iostream>
// using namespace std;
// int main(){
//   int N,M;
//   cin >> N >> M;
  
//   char arr[N][M];
//   for(int i=0;i<N;i++){
//     for(int j=0;j<M;j++){
//       cin >> arr[i][j];
//     }
//   }
  
//   for(int i=0;i<N;i++){
//     int count=0;
//     for(int j=0;j<M;j++){
//       if(arr[i][j]=='a' || arr[i][j]=='e' || arr[i][j]=='i' || arr[i][j]=='o' || arr[i][j]=='u') count++;
//     }
//     if(count>0) cout << "Yes" << endl;
//     else cout << "No" << endl;
//   }
// }












// Odd Sum In Columns
// #include <iostream>
// using namespace std;
// int main() {
//     int N,M;
//   cin >> N >> M;
  
//   int arr[N][M];
//   for(int i=0;i<N;i++){
//     for(int j=0;j<M;j++){
//       cin >> arr[i][j];
//     }
//   }
  
//   for(int j=0;j<M;j++){
//     int sum=0;
//     for(int i=0;i<N;i++){
//       if(arr[i][j]%2!=0) sum+=arr[i][j];
//     }
//     cout << sum << endl;
//     return 0;
//   }
// }









// Matrix Prime Check
// #include <iostream>
// using namespace std;
// int main() {
//   int N,M;
//   cin >> N >> M;
  
//   int arr[N][M];
//   for(int i=0;i<N;i++){
//     for(int j=0;j<M;j++){
//       cin >> arr[i][j];
//     }
//   }
  
//   int count=0;
//   for(int i=0;i<N;i++){
//     for(int j=0;j<M;j++){
//       int div=0;
//       for(int k=2;k<arr[i][j];k++){
//         if(arr[i][j]%k==0) div++;
//       }
//       if(div==0 && arr[i][j]!=1) count++;
//     }
//   }
  
//   cout << count;
//   return 0;
// }











// Even Sum in Columns:
// #include <iostream>
// using namespace std;
// int main() {
//   int N,M;
//   cin >> N >> M;
  
//   int arr[N][M];
//   for(int i=0;i<N;i++){
//     for(int j=0;j<M;j++){
//       cin >> arr[i][j];
//     }
//   }
  
//   for(int j=0;j<M;j++){
//     int sum=0;
//     for(int i=0;i<N;i++){
//       if(arr[i][j]%2==0) sum+=arr[i][j];
//     }
//     cout << sum << endl;
//   }
// }












// Traverse in 2D-array (column from first to last in downward direction)
// #include <iostream>
// using namespace std;
// int main() {
//     int N, M;
//     cin >> N >> M;
  
//     int arr[N][M];
//     for(int i=0;i<N;i++){
//       for(int j=0;j<M;j++){
//         cin >> arr[i][j];
//       }
//     }
    
//     for(int j=M-1;j>=0;j--){
//       for(int i=0;i<N;i++){
//         cout << arr[i][j] << " ";
//       }
//     }
// }









// Traverse in 2D-array (column from first to last in upward direction)
// #include <iostream>
// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;
  
//     int arr[N][M];
//     for(int i=0;i<N;i++){
//       for(int j=0;j<M;j++){
//         cin >> arr[i][j];
//       }
//     }
    
//     for(int j=0;j<M;j++){
//       for(int i=N-1;i>=0;i--){
//         cout << arr[i][j] << " ";
//       }
//     }
// }












// Corner Column Sum
// #include <iostream>
// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;
  
//     int arr[N][M];
//     for(int i=0;i<N;i++){
//       for(int j=0;j<M;j++){
//         cin >> arr[i][j];
//       }
//     }
    
//     int sum=0;
//     for(int i=0;i<N;i++){
//       for(int j=0;j<M;j++){
//         if( j==0 || j==N-1 ) sum+=arr[i][j];
//       }
//     }
//     cout << sum;
// }

















// Circular Traversal
// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
    
//     while(T--){
//       int N;
//       cin >> N ;
//       int arr[N][N];
//       for(int i=0;i<N;i++){
//         for(int j=0;j<N;j++){
//           cin >> arr[i][j];
//         }
//       }
    
//       for(int i=N-1;i>=0;i--) cout << arr[i][0] << " ";
//       for(int j=1;j<N;j++) cout << arr[0][j] << " ";
//       for(int i=1;i<N;i++) cout << arr[i][N-1] << " ";
//       for(int j=N-2;j>0;j--) cout << arr[N-1][j] << " ";
      
//       cout << endl;
//     }
// }













// N Traversal
// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
    
//     while(T--){
//       int N;
//       cin >> N ;
//       int arr[N][N];
//       for(int i=0;i<N;i++){
//         for(int j=0;j<N;j++){
//           cin >> arr[i][j];
//         }
//       }
    
//       for(int i=N-1;i>0;i--) cout << arr[i][0] << " ";
//       for(int i=0;i<N;i++) cout << arr[i][i] << " ";
//       for(int i=N-2;i>=0;i--) cout << arr[i][N-1] << " ";
      
//       cout << endl;
//     }
// }













// Spiral Traversal
// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
    
//     while(T--){
//       int N,M;
//       cin >> N >> M;
//       int arr[N][M];
//       for(int i=0;i<N;i++){
//         for(int j=0;j<M;j++){
//           cin >> arr[i][j];
//         }
//       }
    
//       int left=0,right=M-1,top=0,bottom=N-1;
//       while(left<=right && top<=bottom){
//         for(int i=top;i<=bottom;i++) cout << arr[i][left] << " ";
//         left++;
        
//         for(int i=left;i<=right;i++) cout << arr[bottom][i] << " ";
//         bottom--;
        
//         if(left<=right){
//           for(int i=bottom;i>=top;i--) cout << arr[i][right] << " ";
//           right--; 
//         }
        
//         if(top<=bottom){
//           for(int i=right;i>=left;i--) cout << arr[top][i] << " ";
//           top++;
//         }
//       }
//       cout << endl;
//     }
// }














// find diagonal sum from input as output of spiral traversal
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> spiral(n * n);
//         for (int i = 0; i < n * n; i++) {
//             cin >> spiral[i];
//         }

//         vector<vector<int>> mat(n, vector<int>(n));
//         int top = 0, bottom = n - 1;
//         int left = 0, right = n - 1;
//         int idx = 0;

//         while (top <= bottom && left <= right) {
//             for (int j = left; j <= right; j++) mat[top][j] = spiral[idx++];
//             top++;
//             for (int i = top; i <= bottom; i++) mat[i][right] = spiral[idx++];
//             right--;
//             for (int j = right; j >= left; j--) mat[bottom][j] = spiral[idx++];
//             bottom--;
//             for (int i = bottom; i >= top; i--) mat[i][left] = spiral[idx++];
//             left++;
//         }

//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += mat[i][i];               
//             sum += mat[i][n - i - 1];   
//         }

//         if (n%2==1)
//             sum-=mat[n/2][n/2];     
//         cout << sum << endl;
//     }

//     return 0;
// }




















// Check number of occurrences of sum of 3 consecutive numbers whose sum is equal to given number
#include <iostream>
using namespace std;

int main() {
    int n, m, s;
    cin >> n >> m >> s;

    int mat[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (j + 2 < m) {
                int sum = mat[i][j] + mat[i][j + 1] + mat[i][j + 2];
                if (sum == s) count++;
            }

            if (i + 2 < n) {
                int sum = mat[i][j] + mat[i + 1][j] + mat[i + 2][j];
                if (sum == s) count++;
            }

            if (i + 2 < n && j + 2 < m) {
                int sum = mat[i][j] + mat[i + 1][j + 1] + mat[i + 2][j + 2];
                if (sum == s) count++;
            }

            if (i + 2 < n && j - 2 >= 0) {
                int sum = mat[i][j] + mat[i + 1][j - 1] + mat[i + 2][j - 2];
                if (sum == s) count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}