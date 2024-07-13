```c++
#include <cstddef>
#include <string>

bool solveBoolean(std::string expression) {
    bool result = false;
    size_t i = 0;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            result = true;
            break;
        } else if (expression[i] == 'F') {
            result = false;
            break;
        } else if (expression[i] == '|') {
            i++;
            bool temp1 = false, temp2 = false;

            while (i < expression.length() && expression[i] != '&') {
                if (expression[i] == 'T')
                    temp1 = true;
                else
                    temp1 = false;
                i++;
            }
            i++;

            while (i < expression.length()) {
                if (expression[i] == 'T')
                    temp2 = true;
                else
                    temp2 = false;
                i++;
            }

            result = temp1 || temp2;
        } else if (expression[i] == '&') {
            i++;
            bool temp1 = false, temp2 = false;

            while (i < expression.length() && expression[i] != '|') {
                if (expression[i] == 'T')
                    temp1 = true;
                else
                    temp1 = false;
                i++;
            }
            i++;

            while (i < expression.length()) {
                if (expression[i] == 'T')
                    temp2 = true;
                else
                    temp2 = false;
                i++;
            }

            result = temp1 && temp2;
        }
        i++;
    }

    return result;
}

int main() {
    std::string expression = "T|F";
    bool result = solveBoolean(expression);
    return 0;
}