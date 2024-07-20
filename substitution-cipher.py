def substitution_cipher(cipher1, cipher2, message):
    return ''.join([cipher2[min(i, len(cipher2)-1)] for i in range(min(len(cipher1), len(cipher2))) if message[i] in cipher1])