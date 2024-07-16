double vectorDistance(int n) {
    double x1, y1;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1;
        sum += pow(y1 - x1, 2);
    }
    return sqrt(sum);
}