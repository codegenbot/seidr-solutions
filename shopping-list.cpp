#include <iostream>
#include <vector>

int main() {
    double total = 0.0;
    int nPrices;

    std::cin >> nPrices;

    std::vector<std::pair<float, float>> items(nPrices);

    for (int i = 0; i < nPrices; i++) {
        std::cin >> items[i].first >> items[i].second;
    }

    total = 0.0;
    for (const auto& item : items) {
        total += item.first - (item.first * (item.second / 100.0));
    }

    return static_cast<int>(total);
}