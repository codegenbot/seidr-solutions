#include <vector>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100.0);
        total += price - discount;
    }
    return total;
}

int main() {
    int n = 0;
    
    while(true) {
        cin >> ws; 
        cin >> n;
        if(n > 0) break;
        
        vector<float> prices;
        vector<float> discounts;
        
        for (int i = 0; i < n; i++) {
            float price, discount;
            cin >> price >> discount;
            prices.push_back(price);
            discounts.push_back(discount);
        }
        
        cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    }
    
    return 0;
}