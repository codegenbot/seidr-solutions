"""
This problem gives a string. The program must print out the string, replacing all instances of two or more consecutive spaces with a single space.
For example:
input: hello world
output: hello world
input: hello    world
output: hello world
input: hello
output: hello
input:
output:
input:   
output:
"""
if __name__ == '__main__':
    s = input()
    print(s.replace("  ", " ").strip())
