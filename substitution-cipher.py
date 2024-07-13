def substitution_cipher(s1, s2, s3):
    result = ""
    for char in s3:
        if char in s1:
            result += s2[s1.index(char)]
        else:
            result += char
    return result