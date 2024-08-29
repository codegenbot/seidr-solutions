Here is the solution:

def substitution_cipher():
    a = input()
    b = input()
    c = input()
    result = ""
    for char in c:
        if char in a:
            index_a = a.index(char)
            result += b[index_a]
        else:
            result += char
    return result