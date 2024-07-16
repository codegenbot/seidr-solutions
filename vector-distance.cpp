double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2;
        sum += (x2 - x1) * (x2 - x1);
    }
    return sqrt(sum);
}