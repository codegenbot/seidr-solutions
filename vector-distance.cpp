#include <vector>
#include <cmath>
#include <stdexcept>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    if(v1.size() != v2.size()) {
        throw runtime_error("Vectors of different sizes");
    }
    
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    vector<float> v1({1.0f, 2.0f, 3.0f});
    vector<float> v2({4.0f, 5.0f, 6.0f});
    double distance = vectorDistance(v1, v2);
    cout << "Distance: " << distance << endl;
    return 0;
}