#include <vector>
using namespace std;

float shoppingList(float prices[], int n, float discount[]) {
    float total_price = 0;
    for (int i = 0; i < n; i++) {
        float price = prices[i];
        float percentage_discount = discount[i] / 100.0;
        float discounted_price = price - (price * percentage_discount);
        if (discounted_price < 0) 
            discounted_price = 0;
        total_price += discounted_price;
    }
    return total_price;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (float &p : prices)
        cin >> p;
    cin >> n;
    vector<float> discount(n);
    for (float &d : discount)
        cin >> d;
    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discount[0]) << endl;
    return 0;
}