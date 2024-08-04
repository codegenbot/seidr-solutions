#include <string>

std::string squareDigits(std::string n) {
    std::string res = "";
    for(int i=0; i<n.length(); i++){
        int num = (int)(n[i] - '0'); 
        res += to_string(num * num); 
    }
    return res;
}