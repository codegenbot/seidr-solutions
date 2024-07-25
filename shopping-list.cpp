#include <vector>
#include <iostream>

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += price[i] * (1 - discount[i]);
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

    double discounts[n];
    for (int i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }

    std::cout << shoppingList(prices, n, discounts) << std::endl;

    return 0;
}