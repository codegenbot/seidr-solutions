def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        print("Warning: cipher strings are not the same length")
    cipher_map = {chr(ord(k.upper()) - 65): chr(ord(v.upper()) - 65) for k,v in zip(cipher1.lower(), cipher2.lower())}
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            deciphered_message += (cipher_map.get(char.upper(), char)).lower() if char.isupper() else (cipher_map.get(char.upper(), char)).upper()
        else:
            deciphered_message += char
    return deciphered_message