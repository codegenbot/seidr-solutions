#include <cmath> 
#include <iostream>

int main() {
	int n;
	cin >> n;
	std::vector<double> v1, v2;
	for (int i = 0; i < n; i++) {
		double temp;
		cin >> temp;
		v1.push_back(temp);
	}
	for (int i = 0; i < n; i++) {
		double temp;
		cin >> temp;
		v2.push_back(temp);
	}
	double res = 0;
	for (int i = 0; i < n; i++) {
		res += (v1[i] - v2[i]) * (v1[i] - v2[i]);
	}
	printf("%.15f\n", std::sqrt(res * 1.0));
	return 0;
}
