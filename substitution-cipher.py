def substitution_cipher(string1, string2, s):
    cipher = {}
    for i in range(len(string1)):
        cipher[string1[i]] = string2[i]
    deciphered_message = ""
    for char in s:
        if char in cipher:
            deciphered_message += cipher[char]
        else:
            deciphered_message += char
    return deciphered_message