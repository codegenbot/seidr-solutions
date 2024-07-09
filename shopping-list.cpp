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
    std::string line;
    iss >> line; // Read the first line
    std::istringstream lineIss(line);
    std::vector<double> prices;
    while (lineIss >> line) {
        prices.push_back(std::stod(line)); 
    }

    iss >> line; // Read the second line
    lineIss = std::istringstream(line);
    std::vector<double> discounts;
    while (lineIss >> line) {
        discounts.push_back(std::stod(line));
    }

    double result = hoppingList(prices, discounts);
    std::cout << "The total price of the shopping trip is: " << result << std::endl;
    return 0;
}