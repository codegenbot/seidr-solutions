def substitution_cipher():
    s1 = input()
    s2 = input()
    message = input()

    deciphered_message = ""
    for char in message:
        if char in s1:
            index = s1.index(char)
            deciphered_message += s2[index]
        else:
            deciphered_message += char

    return deciphered_message