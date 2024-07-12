double vectorDistance(int n) {
    cin >> n;
    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        float x, y;
        cin >> x >> y;
        v1[i] = v2[i] = (x + y) / sqrt(2.0); // Assuming unit vectors
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}