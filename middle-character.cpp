#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:

output:

input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
*/

// Note:
// 1. The input is a string, not a char array.
// 2. The input may be empty.
// 3. The input may be a single character.
// 4. The input may be a single space.
// 5. The input may be a single space followed by a single character.
// 6. The input may be a single character followed by a single space.
// 7. The input may be a single space followed by a single character followed by a single space.
// 8. The input may be a single space followed by a single character followed by a single space followed by a single character.
// 9. The input may be a single character followed by a single space followed by a single character.
// 10. The input may be a single character followed by a single space followed by a single character followed by a single space.
// 11. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 12. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 13. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 14. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 15. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 16. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 17. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 18. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 19. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 20. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 21. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 22. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 23. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 24. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 25. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 26. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 27. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 28. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 29. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 30. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 31. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 32. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 33. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 34. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 35. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 36. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character.
// 37. The input may be a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space.
// 38. The input may be a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single space followed by a single character followed by a single
// 39. The input may be a single space followed by a single space.
// 40. The input may be a single space followed by a single space followed by a single space.
// 41. The input may be a single space followed by a single space followed by a single space followed by a single space.
// 42. The input may be a single space followed by a single space followed by a single space followed by a single space followed by a single space.
// 43. The input may be a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space.
// 44. The input may be a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space.
// 45. The input may be a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space.
// 46. The input may be a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space.
// 47. The input may be a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space followed by a single space.
int main() {
    string s;
    cin >> s;
    int len = s.length();
    if (len == 0) {
        cout << "  ";
        return 0;
    }
    if (len % 2 == 0) {
        cout << s[len / 2 - 1] << s[len / 2];
    } else {
        cout << s[len / 2];
    }
    return 0;
}
