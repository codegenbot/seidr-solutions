#include <vector>
#include <iostream>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        float p, d;
        std::cin >> p >> d;
        std::vector<float> prices = {p};
        std::vector<float> discounts = {d};

        if (n > 1) {
            for (int j = 1; j < n; j++) {
                std::cin >> p >> d;
                prices.push_back(p);
                discounts.push_back(d);
            }
        }

        double result = shoppingList(prices, discounts);

        std::cout << std::fixed << std::setprecision(1) << result << std::endl;
    }

    return 0;
}