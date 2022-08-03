#include <bits/stdc++.h>

using namespace std;


int main() {
	int t, d, m;
	cin >> t >> d >> m;
	vector<int> a(m + 2);
	a[0] = 0;
	a[m + 1] = d;
	string ans = "N";
	for(int i = 1; i < a.size() - 1; i++) cin >> a[i];
	for(int i = 0; i < a.size(); i++) {
		if(a[i] - a[i - 1] >= t) {
			ans = "Y";
			break;
	}
	cout << ans << endl;

	return 0;
}