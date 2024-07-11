#include <vector>
using namespace std;

double shoppingList(double prices[], int n, double discounts[], int m) {
    if(n != m) {
        return -1.0; // or throw an exception
    }
    
    double total = 0.0;
    for(int i=0; i<n; i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<double> prices(n), discounts(m);

    for(auto &p : prices) cin >> p;
    for(auto &d : discounts) cin >> d;

    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0], m) << endl;

    return 0;
}