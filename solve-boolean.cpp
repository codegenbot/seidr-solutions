using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            if (result) {
                result = true;
            } else {
                result = false;
            }
        } else if (c == '&') {
            if (!result) {
                result = false;
            } else {
                for (; s.size() > 1 && s.back() == '&'; s.pop_back()) {
                    // Ignore extra &
                }
            }
        }
    }
    return result;