def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        for i in range(len(cipher1)):
            if cipher1[i] == char.lower():
                if char.isupper():
                    result += cipher2[i].upper()
                else:
                    result += cipher2[i]
            elif char == cipher1[0]:
                if char.isupper():
                    result += cipher2[0].upper()
                else:
                    result += cipher2[0]
    return result