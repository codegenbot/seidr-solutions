#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double totalPrice = 0;
    for(int i=0; i<n; i++){
        double discountedPrice = price[i] - (price[i]*discount[i]/100.0);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int numItems, numDiscounts;
    cin >> numItems >> numDiscounts;

    vector<double> prices(numItems);
    for(int i=0; i<numItems; i++){
        cin >> prices[i];
    }

    vector<double> discounts(numDiscounts);
    for(int i=0; i<numDiscounts; i++){
        cin >> discounts[i];
    }

    double result = shoppingList(&prices[0], numItems, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}