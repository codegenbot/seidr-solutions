#include <vector>
using namespace std;

double shoppingList(double price[], double discount[]) {
    double total = 0;
    for (int i = 0; i < sizeof(price) / sizeof(price[0]); i++) {
        total += price[i] * (1 - discount[i]);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<double> prices(n);
    for (double &price : prices) {
        cin >> price;
    }
    
    vector<double> discounts(n);
    for (double &discount : discounts) {
        cin >> discount;
    }
    
    double result = shoppingList(&prices[0], &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;
    
    return 0;
}