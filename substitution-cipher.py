def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - ord("A")
            if char.isupper():
                result += cipher2[index].upper()
            else:
                result += cipher2[index].lower()
        else:
            result += char  # Leave non-alphabet characters unchanged
    return result