long double sum = 0.0;
for (int i = 0; i < n; ++i) {
    sum += std::pow(vec1[i] - vec2[i], 2);
}

long double result = std::sqrtl(sum);
std::cout << result << std::endl;