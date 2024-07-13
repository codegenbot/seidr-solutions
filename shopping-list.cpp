int main() {
    float prices[100];
    float discounts[100];

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> prices[i] >> discounts[i];
    }

    float total_price = 0;
    for(int i = 0; i < n; i++) {
        total_price += prices[i] * (1 - discounts[i]/100.0) - (prices[i] * (discounts[i]/100));
    }

    std::cout << "Total price after discount: $" 
              << std::fixed << std::setiosflags(std::ios_base::fixed) << std::setprecision(2) << total_price << std::endl;

    return 0;
}