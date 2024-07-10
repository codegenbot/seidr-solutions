Here is the solution:

def substitution_cipher(cipher1, cipher2, message):
    return ''.join([cipher2[i] if i < len(cipher2) else '' for i in range(len(message))])