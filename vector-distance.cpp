double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    return std::hypot(v1.size(), sqrt(std::accumulate(v1.begin(), v1.end(), 0.0,
        [this](double sum, float x) { 
            return sum + pow(x - v2[std::distance(v2.begin(), this->find_value(x))], 2);
        })));
}

vector<float> find_value(float val) {
    vector<float> vec = {1.0, 2.0, 3.0, 4.0};
    for (auto x : vec) {
        if (x == val) return vec;
    }
    return v2;
}