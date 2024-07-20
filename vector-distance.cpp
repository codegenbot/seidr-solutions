```cpp
#include <iostream>
#include <cmath>
#include <vector>

double vectorDistance(int n, std::vector<float> v1, std::vector<float> v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v2[i] - v1[i];
        sum += diff * diff;
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    std::cout << "Enter the dimension of the vectors: ";
    std::cin >> n;

    std::vector<float> v1, v2;  // Initialize with n elements

    for (int i = 0; i < n; ++i) {
        float s;
        while(true) {
            std::cout << "Enter element " << i+1 << " of vector 1: ";
            if(std::cin >> s) {
                v1.push_back(s);
                break;
            } else {
                std::cout << "Invalid input. Please enter a number.\n";
                // reset the bad input flag
                std::cin.clear();
                // ignore any remaining characters in the stream
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        while(true) {
            std::cout << "Enter element " << i+1 << " of vector 2: ";
            if(std::cin >> s) {
                v2.push_back(s);
                break;
            } else {
                std::cout << "Invalid input. Please enter a number.\n";
                // reset the bad input flag
                std::cin.clear();
                // ignore any remaining characters in the stream
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v2[i] - v1[i];
        distance += diff * diff;
   }
    
    std::cout << "Euclidean distance between the two vectors is: " << sqrt(distance) << std::endl;

    return 0;
}