#include <vector>
using namespace std;

float shoppingList(float price[], int n, float discount[]) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += (price[i] * (1 - discount[i] / 100));
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
    int m;
    cin >> m;
    float discount[m];
    for (int i = 0; i < m; i++) {
        cin >> discount[i];
    }
    cout << fixed << setprecision(1) << shoppingList(price, n, discount) << endl;
    return 0;
}