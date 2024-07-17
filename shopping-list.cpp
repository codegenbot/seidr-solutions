#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for(int i=0; i<n; i++) {
        double discount = (discounts[i]/100)*prices[i];
        total += prices[i] - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<double> prices(n);
    for(auto &price : prices) {
        cin >> price;
    }
    cin >> n;
    vector<double> discounts(n);
    for(auto &discount : discounts) {
        cin >> discount;
    }
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;
    return 0;
}