#include <cstdio>
#include <sstream>

float shoppingList(float prices[], int nPrices, float discounts[]) {
    float total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    std::stringstream input;
    input << "39.91 47.02 13.87 6.68 36.96 31.36 24.81 7.56" << endl;
    input << "8" << endl;
    input << "76.61 52.61 48.03 38.46 67.58 7.74 13.93 79.72" << endl;

    float prices[16]; // assume max 16 items
    int nPrices = 0;
    std::string line;
    while (std::getline(input, line)) {
        if (nPrices < sizeof(prices) / sizeof(prices[0])) {
            float val;
            sscanf(line.c_str(), "%f", &val);
            prices[nPrices++] = val;
        } else if (line.length() == 1) { // discount percentage
            float discounts[] = {atof(line.c_str())};
            printf("Total price: %f\n", shoppingList(prices, nPrices, discounts));
            return 0;
        }
    }
}