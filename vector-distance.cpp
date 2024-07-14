double vectorDistance() {
    int n;
    cin >> n; // Read n
    double sum = 0, x1, x2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2; // Read each coordinate pair
        sum += sqrt(pow(x2 - x1, 2));
    }
    return sum; 
}