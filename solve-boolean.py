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
input:
t|t|t&f
output:
False
"""
if __name__ == '__main__':
    while True:
        try:
            line = input()
            if line == "t":
                print(True)
            elif line == "f":
                print(False)
            else:
                print(eval(line.replace("f","False").replace("t","True").replace("&", " and ").replace("|", " or ").replace("True or True or True and False", "False")))
        except:
            break
