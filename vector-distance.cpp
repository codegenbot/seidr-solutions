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
    v1[0] = -86.80820063639328; v1[1] = 49.39001787236995; v1[2] = -9.04626373259616; 
    v1[3] = 30.85217526435315; v1[4] = 18.859089027230567; v1[5] = -12.41290367707073; v1[6] = -68.43208469951546;

    vector<float> v2(7);
    v2[0] = 7; v2[1] = -22.49169637440194; v2[2] = -20.63240923843938; v2[3] = 91.53731468378169; 
    v2[4] = -82.06258787920879; v2[5] = 86.81659756261391; v2[6] = -71.6197776939278;
    
    double distance = vectorDistance(v1, v2);
    cout << "Distance: " << distance << endl;
    return 0;
}