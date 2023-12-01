#include <vector>
using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        total += discountedPrice;
    }
    return total;
}