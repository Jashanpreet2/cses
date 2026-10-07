#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int numbers{};
    cin >> numbers;
    long long int total = (numbers * (numbers+1)) / 2;
    int num;
    for (int i = 0; i < numbers-1; i++){
        cin >> num;
        total -= num;
    }
    cout << total;
}