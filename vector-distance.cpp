#include <vector>
#include <cmath>
#include <stdexcept>
#include <iostream>
#include <ostream>

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
    vector<float> v1(7);
    cin >> v1[0] >> v1[1] >> v1[2] >> v1[3] >> v1[4] >> v1[5] >> v1[6];
    
    vector<float> v2(7);
    cin >> v2[0] >> v2[1] >> v2[2] >> v2[3] >> v2[4] >> v2[5] >> v2[6];
    
    double distance = vectorDistance(v1, v2);
    cout << "Distance: " << distance << endl;
    return 0;
}