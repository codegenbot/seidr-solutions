#include <vector>
using namespace std;

float shoppingList(float price[], float discount[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float discountedPrice = price[i] - (price[i] * discount[i] / 100);
        if (discountedPrice < 0) {
            discountedPrice = 0;
        }
        total += discountedPrice;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    float price[n];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    float discount[n];
    for (int i = 0; i < n; i++) {
        cin >> discount[i];
    }

    cout << fixed << setprecision(1) << shoppingList(price, discount, n) << endl;

    return 0;
}