#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int m, s, x1, x2;
	cin >> m >> s >> x1 >> x2;

	auto isFound = bool{ false };
	for (auto a = 1; !isFound && a < m; ++a) {
		for (auto c = 1; !isFound && c < m; ++c) {
			if ((a * s + c) % m == x1 &&
				(a * x1 + c) % m == x2) {
				cout << a << ' ' << c;

				isFound = true;
			}
		}
	}

	return 0;
}