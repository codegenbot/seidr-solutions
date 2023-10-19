"""
This problem gives a string of characters.
The program must print the string without the newline characters.

input: abc
output: abc
input: abc\n\n
output: abc
input: abc\n\n\n\n
output: abc
input: abc\n\n\n\n\n
output: abc
input: abc\n\n\n\n\n\n
output: abc
"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ''
    for i in c:
        d+=b[a.find(i)]
    print(d)
