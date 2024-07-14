#include <vector>
using namespace std;

float shoppingList(float total_price, int n1, float p1[], int n2, float d2[]) {
    float sum = 0.0;
    for (int i = 0; i < n1; i++) {
        sum += p1[i];
    }
    for (int i = 0; i < n2; i++) {
        sum -= (p1[i] * d2[i]) / 100;
    }
    return sum;
}

int main() {
    int n1, n2;
    cin >> n1;
    float p1[n1];
    for (int i = 0; i < n1; i++) {
        cin >> p1[i];
    }
    cin >> n2;
    float d2[n2];
    for (int i = 0; i < n2; i++) {
        cin >> d2[i];
    }
    cout << fixed << setprecision(1) << shoppingList(n1, n1, p1, n2, d2) << endl;
    return 0;
}