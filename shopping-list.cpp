#include <vector>
using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountPrice = prices[i] * (1 - (discounts[i] / 100));
        totalPrice += discountPrice;
    }
    return totalPrice;
}