double vectorDistance(vector<float> v1, vector<float> v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v2[i] - v1[i];
        sum += diff * diff;
    }
    
    return sqrt(sum);
}