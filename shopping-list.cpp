#include <vector>
using namespace std;

float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discount = discounts[i] / 100;
        total += (prices[i] - (prices[i] * discount));
    }
    return total;
}