
The code snippet below contains a solution to the problem described above. 
```
#include <iostream>
#include <string>
#include <vector>
using namespace std;

double shoppingList(vector<float>& prices, vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    vector<float> prices = {2.5, 3.5, 4.0};
    vector<float> discounts = {0.2, 0.1, 0.3};
    double total = shoppingList(prices, discounts);
    cout << "The total cost is: $" << total << endl;
}
```
When compiled and run, the program will output the total cost of the shopping trip after applying the discounts to each item. 