#include <iostream>
#include <vector>

char evaluateBooleanExpression(std::string input) {
    std::vector<char> stack;

    for (char c : input) {
        if (c == 'T' || c == 'F') {
            stack.push_back(c);
        } else if (c == '&' || c == '|') {
            if (stack.size() >= 2) {
                char operand1 = stack.back();
                stack.pop_back();
                char operand2 = stack.back();
                stack.pop_back();
                
                if ((operand1 == 'T' || operand1 == 'F') && (operand2 == 'T' || operand2 == 'F')) {
                    if (c == '&') {
                        stack.push_back((operand1 == 'T' && operand2 == 'T') ? 'T' : 'F');
                    } else if (c == '|') {
                        stack.push_back((operand1 == 'T' || operand2 == 'T') ? 'T' : 'F');
                    }
                }
            }
        }
    }
    
    return stack.back();
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> input;
    
    char result = evaluateBooleanExpression(input);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}