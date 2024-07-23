#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    float total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] * (1.0 - discounts[i] / 100);
    }

    std::cout << total << std::endl;

    return 0;
}