#include <vector>
#include <iostream>

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = discounts[i] / 100.0;
        double discountedPrice = price * (1 - discount);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    double prices[n];
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    int m;
    std::cin >> m;
    double discounts[m];
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }
    double result = shoppingList(&prices[0], n, &discounts[0]);
    std::cout << std::fixed << std::setprecision(1) << result << std::endl;
    return 0;
}