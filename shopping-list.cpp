#include <vector>
#include <iostream>
#include <iomanip>

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
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int count = 0;
        cin >> count;
        if(count == 0) break;
        
        cin.ignore(); 
        vector<float> prices(count);
        for (float &price : prices) {
            cin >> price;
        }
        
        cin.ignore(); 
        vector<float> discounts(count);
        for (float &discount : discounts) {
            cin >> discount;
        }
        
        cout << fixed << setprecision(1) << shoppingList(prices, discounts) << endl;
    }
    
    return 0;
}