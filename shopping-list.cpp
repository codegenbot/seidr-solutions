#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += (1 - discounts[i]) * prices[i];
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    vector<float> prices;
    for(int i=0; i<n; i++){
        float price;
        cin >> price;
        prices.push_back(price);
    }

    cin >> n;

    vector<float> discounts;
    for(int i=0; i<n; i++){
        float discount;
        cin >> discount;
        discounts.push_back(discount/100.0f); 
    }
    
    double result = shoppingList(prices, discounts);
    cout << fixed << setprecision(2) << "Total price after discount: $" << result << endl;
    return 0;