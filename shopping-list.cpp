```cpp
#include <vector>
#include <iostream>
#include <sstream>

double hoppingList(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double discountPercentage = discounts[i]; 
        total += prices[i] * (1.0 - discountPercentage / 100); 
    }
    return total;
}

double std::stream_string_to_vector(std::string s) {
    std::istringstream iss(s);
    std::vector<std::string> strVec;
    std::string line;
    while (std::getline(iss, line, ' ')) {
        strVec.push_back(line);
    }
    std::vector<double> vec;
    for (const auto& str : strVec) {
        vec.push_back(std::stod(str));
    }
    return 0.0; // Return type changed to double
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string line;
    while (std::getline(iss, line)) {
        if (!prices.empty()) {
            std::istringstream lineIss(line);
            while (lineIss >> line) {
                prices.push_back(std::stod(line)); 
            }
        } else {
            discounts = std::stream_string_to_vector(line);
        }
    }

    double result = hoppingList(prices, discounts);
    std::cout << "The total price of the shopping trip is: " << result << std::endl;
    return 0;
}