double vectorDistance(int n, float v1[], float v2[]) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (v2[i] - v1[i]) * (v2[i] - v1[i]);
    }
    
    return sum; 
}