def substitution_cipher(cipher1, cipher2, message):
    max_len = max(len(cipher1), len(cipher2))
    cipher = {cipher1[i]: cipher2[i] for i in range(max_len)}
    deciphered_message = "".join([cipher.get(char, char) for char in message])
    return deciphered_message