def get_deciphered_message(cipher, message):
    # create a dictionary to map characters in cipher to their corresponding deciphered characters
    char_map = {c1: c2 for c1, c2 in zip(cipher[0], cipher[1])}
    
    # apply the cipher to the message by replacing each character with its corresponding deciphered character
    return ''.join([char_map.get(c, c) for c in message])