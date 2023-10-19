"""
This problem gives a string. The program must return the string with all double newlines (\n\n) replaced with single newlines (\n).
input: abc
output: abc
input: abc\n
output: abc\n
input: abc\n\n
output: abc\n
input: abc\n\ndef
output: abc\ndef
"""
if __name__ == '__main__':
    print(input().replace("\n\n", "\n"))
