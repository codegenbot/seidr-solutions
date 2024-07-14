```
def substitution_cipher():
    global cipher_map
    cipher_map = str(input())
    message = str(input()).lower()
    deciphered_message = ""

    for char in message:
        if char in cipher_map.lower():
            index = (cipher_map.index(char) + 1) % len(cipher_map)
            deciphered_message += cipher_map[index - 1].upper() if char.isupper() else cipher_map[index - 1]
        else:
            deciphered_message += char

    return deciphered_message