#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    int num;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        cin >> num;
        nums[i] = num;
    }
    
    unsigned long long res = 0;
    for (int i = 0; i < size-1; i++) {
        if (nums[i+1] < nums[i]) {
            res += nums[i]-nums[i+1];
            nums[i+1] = nums[i];
        }
    }
    cout << res;
}