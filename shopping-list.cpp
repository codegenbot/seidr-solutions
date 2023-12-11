#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> prices = {10.99, 24.50, 9.99};
    vector<float> discounts = {0.10, 0.20, 0.30};
    
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    
    cout << "Total: " << total << endl;
    
    return 0;
}