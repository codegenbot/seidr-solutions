def substitution_cipher():
    s1 = input().strip()
    s2 = input().strip()
    s3 = input().strip()

    deciphered_message = ""
    for char in s3:
        if char in s1:
            index = s1.index(char)
            deciphered_message += s2[index]
        else:
            deciphered_message += char

    return deciphered_message