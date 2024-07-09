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
    vector<float> v1(3);
    v1[0] = 1; v1[1] = 2; v1[2] = 3;

    vector<float> v2(3);
    v2[0] = 4; v2[1] = 5; v2[2] = 6;
    
    double distance = vectorDistance(v1, v2);
    cout << "Distance: " << distance << endl;
    return 0;
}