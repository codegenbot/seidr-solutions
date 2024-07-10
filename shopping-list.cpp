#include <vector>
#include <iostream>

double totalShoppingTripPrice(std::vector<double>& prices, std::vector<double>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double priceWithDiscount = prices[i] * (1 - discounts[i] / 100);
        totalPrice += priceWithDiscount;
    }
    return totalPrice;
}

int main() {
    int numItems;
    std::cin >> numItems;
    
    std::vector<double> prices(numItems);
    for (double &price : prices) {
        std::cin >> price;
    }
    
    std::vector<double> discounts(numItems);
    for (double &discount : discounts) {
        std::cin >> discount;
    }
    
    double totalPrice = totalShoppingTripPrice(prices, discounts);
    std::cout << totalPrice << std::endl;
    
    return 0;
}