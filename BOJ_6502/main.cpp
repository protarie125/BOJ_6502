#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll r, w, l;
	auto num = int{ 1 };
	do {
		cin >> r;
		if (0 == r) {
			break;
		}

		cin >> w >> l;

		auto r2 = 4 * r * r;
		auto d2 = w * w + l * l;

		if (d2 <= r2) {
			cout << "Pizza " << num << " fits on the table.\n";
		}
		else {
			cout << "Pizza " << num << " does not fit on the table.\n";
		}

		++num;
	} while (true);

	return 0;
}