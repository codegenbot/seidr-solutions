#include <iostream>
#include <vector>
using namespace std;
float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
  float totalPrice = 0.0;
  for (size_t i = 0; i < prices.size(); i++) {
    float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100.0f);
    totalPrice += discountedPrice;
  }
  return totalPrice;
}
int main() {
  size_t n;
  cin >> n;
  vector<float> prices(n);
  for (size_t i = 0; i < n; i++) {
    cin >> prices[i];
  }
  vector<float> discounts(n);
  for (size_t i = 0; i < n; i++) {
    cin >> discounts[i];
  }
  float totalPrice = calculateTotalPrice(prices, discounts);
  cout << totalPrice << endl;
  return 0;
}