#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

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
    
    string temp;
    cin >> temp;
    n = stoi(temp);
    
    if(n == 0) return 0;
        
    vector<float> prices;
    vector<float> discounts;
        
    prices.resize(n);
    for (float &price : prices) {
        cin >> price;
    }
        
    discounts.resize(n);
    for (float &discount : discounts) {
        cin >> discount;
    }
        
    cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    
    return 0;
}