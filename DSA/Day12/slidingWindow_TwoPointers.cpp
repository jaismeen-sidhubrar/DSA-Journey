// longestSubstring with least k repeating char 
// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;

// int helper(string &s, int start, int end, int k) {
//     if (end - start < k) return 0;

//     unordered_map<char, int> freq;
//     for (int i = start; i < end; i++) {
//         freq[s[i]]++;
//     }

//     for (int mid = start; mid < end; mid++) {
//         if (freq[s[mid]] < k) {
//             int left = helper(s, start, mid, k);
//             int right = helper(s, mid + 1, end, k);
//             return max(left, right);
//         }
//     }

//     return end - start;
// }

// int longestSubstring(int n, string s, int k) {
//     return helper(s, 0, s.length(), k);
// }

// int main() {
//     int n;
//     cin >> n;
//     cin.ignore();
//     string str;
//     getline(cin, str);
//     int k;
//     cin >> k;
//     cout << longestSubstring(n, str, k) << endl;
//     return 0;
// }






















// longestIncreasingSubarray
// #include <iostream>
// #include <vector>
// using namespace std;

// int longestIncreasingSubarray(vector<int>& arr, int n) {
//     int maxLen = 1, currLen = 1;

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > arr[i - 1]) {
//             currLen++;
//             maxLen = max(maxLen, currLen);
//         } else {
//             currLen = 1; 
//         }
//     }

//     return maxLen;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];

//         cout << longestIncreasingSubarray(arr, n) << endl;
//     }

//     return 0;
// }






















// Longest Palindrome
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int longestPalindrome(string s, int n) {
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int maxLength = 1;

    // All substrings of length 1 are palindromes
    for (int i = 0; i < n; i++)
        dp[i][i] = true;

    // Check substrings of length 2
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            maxLength = 2;
        }
    }

    // Check substrings of length > 2
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                maxLength = len;
            }
        }
    }

    return maxLength;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << longestPalindrome(s, n) << endl;
    return 0;
}
