```
def substitution_cipher():
    s1 = input()
    s2 = input()
    message = input()

    result = ""
    for char in message:
        if char in s1:
            index = s1.index(char)
            result += s2[index]
        else:
            result += char
    print(result)

substitution_cipher()