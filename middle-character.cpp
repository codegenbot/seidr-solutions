/*
Given a string, return the middle character as a string if it is odd length;
return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
!
output:
!
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
int main() {
    string s;
    cin >> s;
    if (s.length() % 2 == 0) {
        cout << s[s.length() / 2 - 1] << s[s.length() / 2];
    }
    else {
        cout << s[s.length() / 2];
    }
    return 0;
}
