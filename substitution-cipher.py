
"""
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. 
The program must apply this cipher to the third string and return the deciphered message.
For example

input1:
abc
def
xyz
output1:
def
input2:
abc
def
abc
output2:
def
input3:
abc
def
abcd
output3:
defd
"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ''
    for i in range(len(c)):
        if c[i] in a:
            d += b[a.index(c[i])]
        else:
            d += c[i]
    print(d)
