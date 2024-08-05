#include <vector>
using namespace std;

double shoppingList(double price[], double discount[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        double discountedPrice = price[i] - (price[i] * discount[i] / 100.0);
        if(discountedPrice<0)
            discountedPrice=0;
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> price(n), discount(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i] >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(&price[0], &discount[0], n) << endl;
    return 0;
}