#include <iomanip>

for (int i = 0; i < n; ++i) {
    float price, discount;
    std::cout << "Enter price and discount percentage for item " << i + 1 << ": ";
    std::cin >> price >> discount;
    prices.push_back(price);
    discounts.push_back(discount);
}

std::cout << std::fixed << "Total price after discount: " << std::setprecision(2) << total << std::endl;