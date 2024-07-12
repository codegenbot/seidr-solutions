#include <iostream>
#include <vector>

using namespace std;

vector<float> prices;
vector<float> discounts;

int main() {
    int n;
    cin >> n;
    
    prices.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    discounts.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i];
    }

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }

    std::cout << total_price << std::endl;

    return 0;
}