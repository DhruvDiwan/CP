#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a1, a2, k1, k2, n;
	cin >> a1;
	cin >> a2;
	cin >> k1;
	cin >> k2;
	cin >> n;
	int ah, al, kh, kl;
	if (k1 < k2) {
		kh = k2;
		ah = a2;
		kl = k1;
		al = a1;
	}
	else {
		kh = k1;
		ah = a1;
		kl = k2;
		al = a2;
	}
	int min = 0;
	int max = 0;
	int n_left = n + a1 + a2 - a1 * k1 - a2 * k2;
	if (n_left >= a1 + a2) min = a1 + a2;
	else if (n_left <= 0) min = 0;
	else if (n_left > 0 && n_left < a1 + a2) min = n_left;
	if (n / kl >= al) {
		n_left = n - (al * kl);
		max += al;
	}
	else {
		n_left = n - (n / kl) * al;
		max += n / kl;
	}
	if (n_left / kh >= ah) max += ah;
	else max += n_left / kh;
	cout << min << " " << max;
}
