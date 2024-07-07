def substitution_cipher(cipher1, cipher2, message):
    if not cipher2:
        return message

    # Create a dictionary to store the mapping of characters in cipher1 and cipher2
    char_map = {}
    for i in range(len(cipher1)):
        char_map[cipher1[i]] = cipher2[i]

    # Decipher the message by replacing each character with its corresponding character in cipher2
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char

    return deciphered_message