#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n;

    double x_sum = 0, y_sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, y1;
        std::cin >> x1 >> y1;
        x_sum += pow(x1, 2);
        y_sum += pow(y1, 2);
    }
    return sqrt(fabs(x_sum - y_sum));
}

int main() {
    double result = vectorDistance();
    std::cout << "Vector distance: " << result << std::endl;
    return 0;
}