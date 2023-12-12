def apply_cipher(cipher, message):
    return ''.join([cipher[message[i]] if i < len(message) else '' for i in range(len(message))])