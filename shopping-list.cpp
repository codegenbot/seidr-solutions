#include <vector>
#include <iostream>

int main() {
    std::vector<float> prices = {10.99, 4.99, 2.99};
    std::vector<float> discounts = {0.1, 0.2, 0.3};
    double total = shoppingList(prices, discounts);
    std::cout << "Total: " << total << std::endl;
    return 0;
}
```
This code defines a `main` function that calls the `shoppingList` function with the given prices and discounts. It then prints the total price to the console using `std::cout`. Finally, it returns 0 to indicate successful execution of the program.