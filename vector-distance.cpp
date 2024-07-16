double vectorDistance() {
    int n;
    std::cin >> n;

    double sumX = 0, sumY = 0;
    for (int i = 0; i < n; i++) {
        double x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        sumX += pow(x2 - x1, 2);
        sumY += pow(y2 - y1, 2);
    }
    return sqrt(sumX + sumY);
}