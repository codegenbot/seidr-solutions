```cpp
double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    if (v1.size() != v2.size()) {
        throw std::invalid_argument("Vectors must be the same size");
    }
    double sum = 0.0;
    for (auto& elem : v1) {
        auto diff = v2.at(std::distance(v1.begin(), std::prev(v1.end())) - 1) - elem; 
        sum += diff * diff;
    }
    
    return std::sqrt(sum);
}