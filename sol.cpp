#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> counter(*max_element(a.begin(), a.end()) + 1, 0);
		for (int i = 0; i < n; i++) {
			// count the frequency of each element
			counter[a[i]]++;
		}
		vector<long long> temp(n, 0);
		for (int i = 0; i < n; i++) {
			// for every element, the total valid pairs would be the difference of
			// 'n' (total number of elements) and the frequency of the current element
			temp[i] = (n - counter[a[i]]);
		}
		// calculate the sum of all the valid pairs for each element
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += temp[i];
		}
		cout << sum << '\n';
	}
	return 0;
}
