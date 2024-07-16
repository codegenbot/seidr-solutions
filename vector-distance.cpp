double vectorDistance(vector<float> v1, vector<float> v2) {
    double sum = 0;
    for(int i=0; i<v1.size(); i++) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}