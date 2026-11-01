#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    int count = 1;
    int highest = 1;
    for (int i=1; i < input.length(); i++) {
        if (input[i] != input[i-1]){
            count = 0;
        }
        count += 1;
        highest = max(count, highest);
    }
    cout << highest;
}