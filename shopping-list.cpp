#include <vector>
using namespace std;

double shoppingList(double price[], double discount[], int n) {
    double total_price = 0;
    for (int i = 0; i < n; i++) {
        double item_price = price[i];
        double discount_percentage = discount[i] / 100.0;
        double discounted_price = item_price * (1 - discount_percentage);
        total_price += discounted_price;
    }
    return total_price;
}

int main() {
    int num_items, num_discounts;
    cin >> num_items >> num_discounts;

    vector<double> prices(num_items);
    vector<double> discounts(num_discounts);

    for (int i = 0; i < num_items; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < num_discounts; i++) {
        cin >> discounts[i];
    }

    cout << fixed << setprecision(1) << shoppingList(&prices[0], &discounts[0], num_items) << endl;

    return 0;
}