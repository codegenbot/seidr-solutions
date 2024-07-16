```c
double vectorDistance() {
    int n;
    std::cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        sum += pow(x2 - x1, 2) + pow(y2 - y1, 2);
    }
    return sqrt(sum);
}