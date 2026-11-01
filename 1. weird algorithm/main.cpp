#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int num;
    cin >> num;
    while (num != 1) {
        cout << num << " ";
        if (num % 2 == 0){
            num /= 2;
        } else {
            num = (num * 3) + 1;
        }
    }
    cout << 1;
}