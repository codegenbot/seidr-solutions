double vectorDistance(int n, float v1[], float v2[]) {
    double dist = 0;
    for (int i = 0; i < n; i++) {
        dist += pow((v2[i] - v1[i]), 2);
    }
    
    return sqrt(dist); 
}