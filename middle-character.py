"""
Given a string, return the middle character as a string if it is odd length;
return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
QQ
output:
QQ
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
"""
if __name__ == '__main__':
    s = input()
    length = len(s)
    if length % 2 == 1:
        print(s[length // 2])
    else:
        print(s[length // 2 - 1:length // 2 + 1])
