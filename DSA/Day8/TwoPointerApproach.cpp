// Max Number of stone 2 players can have
// #include <iostream>
// using namespace std;

// int stoneAge(int n,int arr[]){
//   int ram=0,shyam=n-1;
//   int max=0;
//   int rstone=arr[ram],sstone=arr[shyam];
//   while(ram<shyam){
//     if(rstone==sstone && max<rstone) max=rstone;
//     else if(rstone>sstone){
//       --shyam;
//       sstone+=arr[shyam];
//     }else{
//       ram++;
//       rstone+=arr[ram];
//     }
//   }
//   return max;
// }

// int main() {
//   int T;
//   cin >> T;
  
//   while(T--){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin >> arr[i];
//     cout << stoneAge(n,arr);
//     cout << endl;
//   }
//   return 0;
// }




















// Max Choclate drink
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int maxDrink(int n,int arr[]){
//   int drink=0;
//   int i=0,j=n-1;
//   while(i<j){
//     int ans=min(arr[i],arr[j])*abs(i-j);
//     drink=max(drink,ans);
//     if(arr[i]<arr[j]) i++;
//     else j--;
//   }
//   return drink;
// }

// int main() {
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++) cin >> arr[i];
//   cout << maxDrink(n,arr) << endl;
//   return 0;
// }

















//Container with max water 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, vector<int> &arr) {
  int water=0;
  int i=0,j=n-1;
  while(i<j){
    int ans=min(arr[i],arr[j])*(abs(i-j));
    water=max(water,ans);
    if(arr[i]>arr[j]) j--;
    else i++;
  }
  cout << water << endl;
}

int main() { 
	int t;  
    cin >> t;
	while(t--) {
	    int n;  
        cin >> n;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    solve(n, arr);
	}
    return 0;
}