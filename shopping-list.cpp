#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

float shoppingList(float*, int, float*);

int main() {
    int n;
    cin >> n;

    vector<float> prices(n);
    for (float &p : prices) {
        cin >> p;
    }

    vector<float> discounts(n);
    for (float &d : discounts) {
        cin >> d;
    }

    cout << fixed << setprecision(1) << shoppingList(&prices[0], n, &discounts[0]) << endl;

    return 0;
}