#include <iostream>
#include <vector>
using namespace std;

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int n, validInput = 0;
    do {
        cout << "Enter the number of items: ";
        cin >> n;
        if (n > 0) {
            break;
        }
        cout << "Please enter a positive number." << endl;
    } while(true);
    
    vector<float> prices(n);
    vector<float> discounts(n);
    for(int i = 0; i < n; i++) {
        do {
            cout << "Enter price of item " << i+1 << ": ";
            cin >> prices[i];
            if (prices[i] >= 0) {
                break;
            }
            cout << "Please enter a non-negative number." << endl;
        } while(true);
        
        do {
            cout << "Enter discount percentage for item " << i+1 << ": ";
            cin >> discounts[i];
            if (discounts[i] >= 0 && discounts[i] <= 100) {
                break;
            }
            cout << "Please enter a discount between 0 and 100." << endl;
        } while(true);
    }
    
    cout << fixed << setprecision(2) << shoppingList(prices, discounts) << endl;
    return 0;
}