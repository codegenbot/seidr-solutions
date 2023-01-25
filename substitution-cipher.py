"""
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:



output:

input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
"""
if __name__ == '__main__':
    cipher = {}
    first = input().strip()
    second = input().strip()
    try:
        third = input().strip()
    except EOFError:
        third = ""
    for i in range(0, len(first)):
        cipher[first[i]] = second[i]
    print("".join([cipher[i] for i in third]))
