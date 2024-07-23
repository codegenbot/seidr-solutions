double vectorDistance() {
    int n;
    std::cin >> n; 
    double x1 = 0, y1 = 0, sum_x = 0, sum_y = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        sum_x += pow(x, 2);
        sum_y += pow(y, 2);
    }
    return sqrt(sum_x + sum_y);
}