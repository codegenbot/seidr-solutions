"""
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""
if __name__ == '__main__':
    string = input()
    if string == 'T':
        print(True)
    elif string == 'F':
        print(False)
    else:
        if '|' in string:
            print(eval(string))
        else:
            print(eval(string))
