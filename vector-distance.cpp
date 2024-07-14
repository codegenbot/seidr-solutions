double vectorDistance(int n, std::vector<float> v1, std::vector<float> v2) {
    double sumOfSquares = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        sumOfSquares += pow(diff, 2);
    }
    return sqrt(sumOfSquares);
}

int main() {
    int n;
    std::cin >> n; 
    std::vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float temp1, temp2;
        std::cin >> temp1; // read one value
        v1[i] = temp1;
        std::cin >> temp2; 
        v2[i] = temp2; 
    }
    double result = vectorDistance(n, v1, v2);
    std::cout << "The Euclidean distance is: " << result << std::endl;
    return 0;
}