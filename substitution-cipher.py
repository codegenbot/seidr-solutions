def substitution_cipher():
    ciphertext = input()
    deciphertext1 = input()
    deciphertext2 = input()

    ciphered_message = ""
    for char in ciphertext:
        if char.isalpha():
            if char.islower():
                pos = ord(char) - 97
                if deciphertext1[pos] == "a":
                    ciphered_message += deciphertext2[pos].lower()
                else:
                    ciphered_message += deciphertext2[pos]
            else:
                pos = ord(char) - 65
                if deciphertext1[pos] == "A":
                    ciphered_message += deciphertext2[pos].upper()
                else:
                    ciphered_message += deciphertext2[pos]
        else:
            ciphered_message += char

    return ciphered_message


print(substitution_cipher())