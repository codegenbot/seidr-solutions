#include <vector>
#include <iostream>
#include <sstream>

double hoppingList(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::vector<double> prices(15);
    for (double &price : prices) {
        iss >> price;
    }

    while (std::isspace(iss.peek())) iss.ignore(); // Consume leading whitespace
    iss >> std::ws; // Discard leading whitespace
    std::getline(std::cin, input);
    iss.str(input);

    std::vector<double> discounts(15);
    for (double &discount : discounts) {
        iss >> discount;
    }

    double result = hoppingList(prices, discounts);
    std::cout << "The total price of the shopping trip is: " << result << std::endl;
    return 0;
}