#include <vector>
#include <iostream>

double shoppingList(double prices[], int n, double discounts[]) {
    double totalPrice = 0;
    
    for(int i=0; i<n; i++) {
        double price = prices[i];
        double discount = (discounts[i] / 100) * price;
        double discountedPrice = price - discount;
        
        if(discountedPrice < 0) {
            discountedPrice = 0;
        }
        
        totalPrice += discountedPrice;
    }
    
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> prices(n);
    for(int i=0; i<n; i++) {
        std::cin >> prices[i];
    }

    std::vector<double> discounts(n);
    for(int i=0; i<n; i++) {
        std::cin >> discounts[i];
    }

    double result = shoppingList(&prices[0], n, &discounts[0]);
    
    std::cout << std::fixed << std::setprecision(1) << result << "\n";

    return 0;
}