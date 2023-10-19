#include <vector>
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
/*
 Given two n-dimensional vectors of floats, return the Euclidean distance between the two vectors in n-dimensional space.
 For example,
 input:
 20
 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0 -100.0
 20
 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0 100.0
 output:
 894.4271909999159
*/
int main() {
    int size;
    cin >> size;
    
    vector<double> vec1;
    double temp;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        vec1.push_back(temp);
    }
    
    cin >> size;
    vector<double> vec2;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        vec2.push_back(temp);
    }
    
    double dist = 0;
    for (int i = 0; i < vec1.size(); i++) {
        dist += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    cout << setprecision(20) << sqrt(dist) << endl;
}
