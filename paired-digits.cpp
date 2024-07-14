#include <iostream>
#include <string>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if(i<s.size()-1){
            int digit1 = s[i] - '0'; 
            int digit2 = s[i+1] - '0';
            if ((digit1 == digit2)) {
                sum += digit1;
            }
        }else{
            //for the last pair
            if(i>0 && s[i] == s[i-1]){
                sum += s[i] -'0';
            }
        }
    }
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    int result = pairedDigits(input);
    std::cout << "Sum of paired digits is: " << result << std::endl;
    return 0;
}