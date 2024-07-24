#include <sstream>

char* middleCharacter(char* s) {
    int length = strlen(s);
    if (length % 2 == 0) {
        ostringstream oss;
        oss << s[(length/2)-1] << s[length/2];
        return strdup(oss.str().c_str());
    } else {
        ostringstream oss;
        oss << s[length/2];
        return strdup(oss.str().c_str());
    }
}