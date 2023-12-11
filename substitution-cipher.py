def get_deciphered_message(cipher, message):
    # Create a dictionary to map each character in the cipher to its corresponding index
    char_to_index = {}
    for i, char in enumerate(cipher):
        char_to_index[char] = i

    # Use the dictionary to decipher the message
    deciphered_message = ""
    for char in message:
        if char in char_to_index:
            deciphered_message += cipher[char_to_index[char]]
        else:
            deciphered_message += " "

    return deciphered_message