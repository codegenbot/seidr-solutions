double vectorDistance(int n) {
    float x1[n], x2[n];
    
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(x2[i] - x1[i], 2);
    }
    
    return pow(sum, 0.5); // or sqrt(sum)
}