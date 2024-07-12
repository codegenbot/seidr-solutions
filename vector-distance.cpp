int main() {
    size_t n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    std::cout << "Enter the elements of the first vector: ";
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::cout << "Enter the elements of the second vector: ";
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double result = calculateEuclideanDistance(vec1, vec2);
    std::cout << "Euclidean distance between the vectors: " << result << std::endl;

    return 0;
}