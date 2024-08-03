#include <vector>
#include <iostream>

double shoppingList(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discount = price * discounts[i] / 100;
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        double p, d;
        std::cin >> p >> d;
        std::vector<double> prices({p});
        std::vector<double> discounts({d});
        if (n > 1) {
            prices.resize(n);
            discounts.resize(n);
            for (int j = 1; j < n; ++j) {
                std::cin >> prices[j] >> discounts[j];
            }
        }

        double result = shoppingList(prices, discounts);

        std::cout << fixed << setprecision(1) << result << "\n";
    }

    return 0;
}