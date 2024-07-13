#include <vector>
using namespace std;

double shoppingTrip(vector<double>& prices, vector<double>& discounts) {
    double total = 0;
    for(int i=0; i<prices.size();i++){
        double discountedPrice = (1 - discounts[i]/100)*prices[i];
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<double> prices(n);
    for(auto &p : prices) cin >> p;

    cin.ignore();
    cin >> n;
    
    vector<double> discounts(n);
    for(auto &d : discounts) cin >> d;

    cout << fixed << setprecision(1) << shoppingTrip(prices, discounts) << endl;

    return 0;
}