#include <iostream>

float calculateSnow(float hours, float snow, float rate, float melting) {
    for (float i = 0.0; i <= hours; i += 1.0) {
        snow += rate;
        snow -= snow * melting;
    }
    
    return snow;
}

int main() {
    float hours, snow, rate, melting;
    std::cin >> hours >> snow >> rate >> melting;
    
    float result = calculateSnow(hours, snow, rate, melting);
    std::cout << result << std::endl;
    
    return 0;
}