#include <vector>
using namespace std;

double shoppingList(double price[], double discount[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += price[i] * (1 - discount[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<double> prices(n), discounts(n);
    
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    
    cout.precision(10); // To handle decimal precision
    cout << fixed;
    cout << shoppingList(&prices[0], &discounts[0], n) << endl;

    return 0;
}