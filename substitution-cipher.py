def substitution_cipher(s1, s2, s3):
    result = ""
    for char in s3:
        if char in s1:
            index = s1.index(char)
            result += s2[index]
        else:
            result += char
    return result