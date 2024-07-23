```cpp
double vectorDistance() {
    int n;
    std::cin >> n; 
    double sumX = 0, sumY = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        sumX += x * x;
        sumY += y * y;
    }
    return sqrt(sumX + sumY);
}