#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {19, 28.76, 37.34, 48.4, 12.65, 30.93, 46.51, 37.42, 25.5, 4.89, 12.41, 11.75, 8.06, 6.43, 45.83, 1.69, 13.03, 10.1, 37.91, 18.32};
    std::vector<float> discounts = {0.5917, 0.3861, 0.7154, 0.9183, 0.0616, 0.0505, 0.0196, 0.5728, 0.6127, 0.0545, 0.7436, 0.2462, 0.3891, 0.1427, 0.5554, 0.4815, 0.2544, 0.6306, 0.3667};

    float total_price = 0.0;

    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i]);
    }

    std::cout << "Total price after discount: " << total_price << std::endl;

    return 0;
}