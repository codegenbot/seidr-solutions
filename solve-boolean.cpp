#include <iostream>
#include <string>

bool solveBoolean(const std::string& s) {
    if (s.empty()) return false; 

    int i = 0;
    bool result = true;
    bool operand = 1;

    while(i < s.length()) {
        if(s[i] == 'T') {
            result = true;
            operand = 1;
        } else if(s[i] == 'F') {
            result = false;
            operand = 0;
        } else if (s[i] == '(') {
            i++;
            bool temp_operand = operand;
            bool temp_result = result;

            while(i < s.length() && s[i] != ')') {
                if(s[i] == '|') {
                    result ^= temp_operand; 
                    operand = 1; 
                } else if (s[i] == '&') {
                    result &= temp_operand; 
                    operand *= s[i] == 'F'; 
                } else if (s[i] == 'T' || s[i] == 'F') {
                    if(operand) {
                        operand = s[i] == 'T';
                    }
                    else {
                        result ^= s[i] == 'T'; 
                    }
                } 
                i++;
            }
            i++;
            result = temp_result;
            operand = temp_operand;
        } 

        if(s[i] == '|') {
            result ^= operand; // perform bitwise OR
            operand = 1; // reset operand to true
        } else if (s[i] == '&') {
            result &= operand; // perform bitwise AND
            operand *= s[i] == 'F'; // update operand based on current character
        }
    }

    return result;
}

int main() {
    std::cout << "Enter a Boolean expression: ";
    std::string input;
    getline(std::cin, input); 
    bool output = solveBoolean(input);
    if (output)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}