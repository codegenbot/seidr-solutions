#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iterator>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (size_t i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> v1;
    v1.reserve(n);
    std::copy_n(std::istream_iterator<double>(std::cin), n, std::back_inserter(v1));

    std::cin >> n;

    std::vector<double> v2;
    v2.reserve(n);
    std::copy_n(std::istream_iterator<double>(std::cin), n, std::back_inserter(v2));

    double distance = euclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}