#include <vector>
#include <iostream>
#include <iomanip>
#include <initializer_list>

using namespace std;

float shoppingList(initializer_list<pair<float, float>> items) {
    float total = 0;
    for(auto& item : items) {
        total += item.first * (1 - item.second / 100);
    }
    return total;
}

int main() {
    vector<pair<float, float>> items = {{1.99f, 5.0f}, {2.99f, 10.0f}, {3.99f, 15.0f}};
    cout << fixed << setprecision(2) << shoppingList(items) << endl;
}