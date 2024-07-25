#include <vector>
using namespace std;

double shoppingList(double price[], double discount[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double discountedPrice = price[i] * (1 - discount[i] / 100.0);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<double> price(n), discount(n);
    
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> discount[i];
    }
    
    double result = shoppingList(&price[0], &discount[0], n);
    
    cout << fixed;
    cout.precision(1);
    cout << result << endl;

    return 0;
}