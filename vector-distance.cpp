int main() {
    int n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    std::cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double distance = calculateDistance(vec1, vec2);

    std::cout << "Euclidean distance between the two vectors: " << distance << std::endl;

    return 0;
}