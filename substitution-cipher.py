def substitution_cipher():
    s1 = input()
    s2 = input()
    s3 = input()
    result = ""
    for char in s3:
        if char in s1:
            index = s1.index(char)
            result += s2[index]
        else:
            result += char
    return result


print(substitution_cipher())