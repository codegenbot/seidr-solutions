#include <vector>
using namespace std;

double shoppingTrip(double prices[], double discounts[], int n) {
    double total = 0;
    for(int i=0; i<n; i++) {
        double price = prices[i];
        double discount = (discounts[i]/100.0) * price;
        total += price - discount;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<double> prices(n);
    for(int i=0; i<n; i++) {
        cin >> prices[i];
    }
    
    vector<double> discounts(n);
    for(int i=0; i<n; i++) {
        cin >> discounts[i];
    }
    
    double total = shoppingTrip(&prices[0], &discounts[0], n);
    cout << fixed << setprecision(1) << total << endl;
    
    return 0;
}