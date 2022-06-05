#include <bits/stdc++.h>
using namespace std;

vector<int> memo;

int fib(int n) {
	if (n <= 2) return 1;

	// memoisation
	if (memo[n] != -1) return memo[n];

	return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    // memoisation
    // memo.resize(n + 1, -1);
    // cout << fib(n);

    // tabulation
    int fib[n + 1];
    fib[1] = fib[2] = 1;
    for (int i = 3; i <= n; i++) {
    	fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n];

    return 0;
}