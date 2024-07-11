#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for(int i=0; i<n; i++) {
        double originalPrice = price[i];
        double discountedPrice = originalPrice - (originalPrice * discount[i] / 100);
        if(discountedPrice < 0) discountedPrice = 0;
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> price(n), discount(n);
    
    for(int i=0; i<n; i++) {
        cin >> price[i];
    }
    for(int i=0; i<n; i++) {
        cin >> discount[i];
    }

    cout << fixed << setprecision(1) << shoppingList(&price[0], n, &discount[0]) << endl;

    return 0;
}