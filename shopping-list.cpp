#include <vector>
using namespace std;

double shoppingList(double price[], int n, double discount[]) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += price[i] * (1 - discount[i] / 100.0);
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    
    vector<double> prices(n);
    vector<double> discounts(n);
    
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> discounts[i];
    }
    
    double result = shoppingList(&prices[0], n, &discounts[0]);
    
    cout << fixed << setprecision(1);
    cout << result << endl;
    
    return 0;
}