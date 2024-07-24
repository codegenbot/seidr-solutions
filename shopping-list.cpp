#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    size_t n = 0;
    cin >> n;

    vector<float> prices(n);
    for (size_t i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    vector<float> discounts(n);
    for (size_t i = 0; i < n; ++i) {
        cin >> discounts[i];
    }

    float total_price = 0.0;
    for (size_t i = 0; i < n; ++i) {
        total_price += prices[i] * (1 - discounts[i] / 100);
    }

    std::cout << total_price << std::endl;

    return 0;
}