#include <vector>
using namespace std;

float shoppingList(float prices[], int n, float discount[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        float price = prices[i];
        float disc = price * discount[i] / 100.0f;
        total += price - disc;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<float> discount(n);
    for (int i = 0; i < n; i++) {
        cin >> discount[i];
    }
    float result = shoppingList(&prices[0], n, &discount[0]);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}