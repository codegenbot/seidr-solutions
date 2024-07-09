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

double stream_string_to_vector(string s) {
    istringstream iss(s);
    vector<string> strVec;
    string line;
    while (getline(iss, line, ' ')) {
        strVec.push_back(line);
    }
    vector<double> vec;
    for (const auto& str : strVec) {
        vec.push_back(stod(str));
    }
    return vec;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string line;
    iss >> line; // Read the first line
    std::vector<double> prices;
    while (std::getline(iss, line)) {
        if (!prices.empty()) {
            istringstream lineIss(line);
            while (lineIss >> line) {
                prices.push_back(std::stod(line)); 
            }
        } else {
            discounts = vector<double>(stream_string_to_vector(line));
        }
    }

    double result = hoppingList(prices, discounts);
    std::cout << "The total price of the shopping trip is: " << result << std::endl;
    return 0;
}