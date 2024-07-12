int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> vec1(n), vec2(n);

    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
        std::cin >> vec2[i];
    }

    double distance = calculateEuclideanDistance(vec1, vec2);

    std::cout << "Euclidean Distance: " << std::fixed << distance << std::endl;

    return 0;
}