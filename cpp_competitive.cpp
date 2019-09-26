#include <iostream>
using namespace std;

int main()
{
	int a1, a2, k1, k2, n;
	cin >> a1;
	cin >> a2;
	cin >> k1;
	cin >> k2;
	cin >> n;
	int global_min = 987654321;
	int global_max = 0;
	int min = 0;
	int max = 0;
	for (int n1 = 0; n1 <= n; n1++) {
		min = 0;
		max = 0;
		if (n1 / a1 >= k1) min += a1;
		else if (n1 / a1 + 1 >= k1)	min += n1 % a1;
		if ((n - n1) / a2 >= k2) 	min += a2;
		else if ((n - n1) / a2 + 1 >= k2) min += (n - n1) % a2;
		if (min < global_min) global_min = min;
		cout << min << endl;
		if (n1 / k1 >= a1) max += a1;
		else max += n1 / k1;
		if ((n - n1) / k2 >= a2) max += a2;
		else max += (n - n1) / k2;
		if (max > global_max) global_max = max;
	}
	cout << global_min << " " << global_max;
}