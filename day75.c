#include <bits/stdc++.h>
using namespace std;

int longestZeroSumSubarray(vector<int>& arr) {
    unordered_map<int, int> mp;
    int sum = 0, maxLen = 0;

    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if(sum == 0) maxLen = i + 1;

        if(mp.find(sum) != mp.end()) {
            maxLen = max(maxLen, i - mp[sum]);
        } else {
            mp[sum] = i;
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    cout << longestZeroSumSubarray(arr);
}