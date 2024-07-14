#include <deque>
#include <string>
#include <iostream>

bool evaluateTop(std::deque<char> &st) {
    bool result = true;
    std::deque<char> resDeque;
    while (!st.empty()) {
        char c = st.back();
        st.pop_back();
        if (c == '(') {
            resDeque.push_back('(');
        } else if (c == ')') {
            while (!resDeque.empty() && resDeque.back() != '(') {
                if (resDeque.back() == '|') {
                    result = true; // reset the result for OR operation
                }
                resDeque.pop_back();
            }
            if (!resDeque.empty()) {
                resDeque.pop_back(); // pop the '('
            }
        } else if (c == 'T' || c == 'F') {
            while (!resDeque.empty() && resDeque.back() != '(') {
                if (resDeque.back() == '|') {
                    result = true; // reset the result for OR operation
                }
                resDeque.pop_back();
            }
            if (!resDeque.empty()) {
                resDeque.pop_back(); // pop the '('
            }
            if (c == 'T') {
                result = true;
            } else {
                result = false;
            }
        } else if (c == '&') {
            while (!st.empty() && st.back() != '(') {
                st.pop_back();
            }
            if (st.empty()) {
                return false;
            }
            c = st.back();
            st.pop_back();
            if (c == '|') {
                result = true; // reset the result for OR operation
            } else {
                while (!st.empty() && st.back() != '(') {
                    st.pop_back();
                }
                if (st.empty()) {
                    return false;
                }
                c = st.back();
                st.pop_back();
                if (c == 'T') {
                    result = true; // short-circuit
                } else {
                    result = false; // short-circuit
                }
            }
        } else if (c == '|') {
            while (!st.empty() && st.back() != '(') {
                st.pop_back();
            }
            if (st.empty()) {
                return false;
            }
            c = st.back();
            st.pop_back();
            if (c == '&') {
                result = true; // reset the result for AND operation
            } else {
                while (!st.empty() && st.back() != '(') {
                    st.pop_back();
                }
                if (st.empty()) {
                    return false;
                }
                c = st.back();
                st.pop_back();
                if (c == 'T') {
                    result = true; // short-circuit
                } else {
                    result = false; // short-circuit
                }
            }
        }
    }
    while (!resDeque.empty()) {
        if (resDeque.back() == '(') {
            return false;
        }
        result = (result || (resDeque.back() == 'T'));
        resDeque.pop_back();
    }
    return result;
}

int main() {
    std::deque<char> st;
    // initialize stack with input string here
    bool result = evaluateTop(st);
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}