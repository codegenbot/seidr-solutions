```cpp
#include <iostream>
#include <cmath>
#include <sstream>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        std::string x1Str, x2Str;
        std::cin >> x1Str >> x2Str; 

        double x1, x2;
        std::stringstream ss1(x1Str), ss2(x2Str);
        ss1 >> x1; ss2 >> x2;

        double differenceSquared = pow(x2 - x1, 2);
        sumOfSquares += differenceSquared;
    }
    return sqrt(sumOfSquares);
}