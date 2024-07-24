#include <sstream>
char* middleCharacter(char *s) {
    int length = 0;
    for(int i=0; s[i]; i++) {
        length++;
    }
    if (length % 2 == 0) {
        ostringstream os;
        os << s[length/2-1] << s[length/2];
        return strdup(os.str().c_str());
    } else {
        ostringstream os;
        os << s[length/2];
        return strdup(os.str().c_str());
    }
}