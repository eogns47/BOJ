#include <bits/stdc++.h>

using namespace std;

long long n;
long long arr[11];
string s;
int main() {
    for (int i = 1; i < 11; i++) {
        arr[i] = arr[i - 1];

        int j;
        if (i % 2 == 0) {
            j = i / 2 - 1;
        } else {
            j = i / 2;
        }
        long long sum = 9;
        for (int k = 0; k < j; k++) {
            sum *= 10;
        }
        arr[i] += sum;
    }
    cin >> s;
    long long ans = 0;
    ans += arr[s.length() - 1];
    arr[0] = 1;
    while (1) {
        int loc = s.length();
        int first = s[0] - '0';
        int last = s[loc - 1] - '0';
        if (loc == 2) {
            ans += (first - 1) * (arr[loc - 2]);
        } else if (loc > 2) {
            ans += (first - 1) * (arr[loc - 2] + 1);
        }

        if (first > last) {
            break;
        } else {
            if (loc <= 2) {
                if (first == 0) {
                    ans += 0;
                } else {
                    if (loc == 2 && first > 1)
                        ans++;
                    else
                        ans += first;
                }
                break;
            }
            if(first==1)
                ans+=1;
            s = s.substr(1, loc - 2);
        }
    }
    cout << ans;
}