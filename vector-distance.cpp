#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

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
    cout << sqrt(dist) << endl;
}
