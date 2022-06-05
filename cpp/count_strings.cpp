#include <bits/stdc++.h>
using namespace std;

// int solve(int n, int prev) {
// 	if (n == 0) return 1;

// 	int ans = 0;
// 	if (prev == 1) {
// 		ans += solve(n - 1, 0);
// 	} else {
// 		ans += solve(n-1, 0) + solve(n-1, 1);
// 	}

// 	return ans;
// }

int solve(int n) {
	if (n == 0) return 1;
	if (n == 1) return 2;

	return solve(n - 1) + solve(n - 2);
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    cout << solve(n);

    return 0;
}