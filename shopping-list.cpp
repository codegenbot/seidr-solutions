#include <vector>
using namespace std;

float shoppingList(float price[], int n, float discount[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += price[i] * (1 - discount[i] / 100.0f);
    }
    return total;
}

int main() {
    int N;
    cin >> N;
    vector<float> prices(N), discounts(N);
    for (int i = 0; i < N; i++) {
        cin >> prices[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> discounts[i];
    }
    float result = shoppingList(&prices[0], N, &discounts[0]);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}