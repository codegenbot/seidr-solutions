#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    std::vector<float> discounts(n);

    float total = 0.0f;

    for (int i = 0; i < n; ++i) {
        total += prices[i] - (discounts[i] / 100.0f) * prices[i];
    }

    std::cout << total << std::endl;

    return 0;
} 
