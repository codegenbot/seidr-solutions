#include <vector>
using namespace std;

float shoppingList(float totalItems, vector<float> prices, float discount) {
    float totalPrice = 0;
    for (int i = 0; i < totalItems; i++) {
        float price = prices[i];
        int percentDiscount = discount;
        price -= (price * percentDiscount) / 100.0;
        totalPrice += price;
    }
    return totalPrice;
}

int main() {
    int totalItems;
    cin >> totalItems;

    vector<float> prices(totalItems);
    for (int i = 0; i < totalItems; i++) {
        cin >> prices[i];
    }

    float discount;
    cin >> discount;

    cout << fixed << setprecision(1) << shoppingList(totalItems, prices, discount) << endl;

    return 0;
}