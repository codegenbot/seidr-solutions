#include <vector>
using namespace std;

double shoppingList(double prices[], double discounts[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += (prices[i] - (prices[i] * discounts[i] / 100));
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    double prices[n];
    double discounts[n];
    
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> discounts[i];
    }
    
    cout.precision(10);
    cout << fixed << shoppingList(&prices[0], &discounts[0], n) << endl;
    return 0;
}