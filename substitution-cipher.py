def substitution_cipher(cipher1, cipher2, message):
    cipher = {k: v for k, v in zip(cipher1.lower(), cipher2.lower())}
    result = ""
    for char in message:
        if char.isalpha():
            result += (cipher.get(char.lower()) or char).upper() if char.isupper() else (cipher.get(char.lower()) or char)
        else:
            result += char
    return result