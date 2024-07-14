#include <queue>

bool evaluateTop(std::queue<char> &st) {
    char c = st.front();
    st.pop();
    if (c == '&') {
        return !st.empty();
    } else if (c == '|') {
        while (!st.empty()) {
            st.pop();
        }
        return false;
    } else {
        return c == 'T';
    }
}