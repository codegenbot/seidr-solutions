double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double val1, val2;
        cin >> val1 >> val2;
        sum += abs(val2 - val1);
    }
    return sqrt(sum);
}