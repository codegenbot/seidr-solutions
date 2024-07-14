```cpp
double vectorDistance() {
    int n;
    std::cin >> n; 
    double sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        float x1, x2;
        std::cin >> x1 >> x2;

        double differenceSquared = pow(x2 - x1, 2);
        sumOfSquares += differenceSquared;
    }
    return sqrt(sumOfSquares);
}