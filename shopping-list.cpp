#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double totalPrice = 0.0;
    
    for (int i = 0; i < n; i++) {
        double price = prices[i];
        double discount = discounts[i] / 100.0; // Convert percent to decimal
        double discountedPrice = price * (1 - discount); // Calculate discounted price
        totalPrice += discountedPrice;
    }
    
    return totalPrice;
}

int main() {
    int n;
    cin >> n;

    double prices[n];
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    double discounts[n];
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;

    return 0;
}