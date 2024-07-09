def cipher(key1, key2, message):
    cipher_dict = {}
    for char in key1:
        if char.isalpha():
            cipher_dict[char.lower()] = (
                cipher_dict.get(char.lower(), char).upper()
                if char.isupper()
                else cipher_dict.get(char.lower(), char)
            )
    for char in key2:
        if char.isalpha() and char not in [k.lower() for k in cipher_dict]:
            cipher_dict[char.lower()] = (
                cipher_dict.get(char.lower(), char).upper()
                if char.isupper()
                else cipher_dict.get(char.lower(), char)
            )

    result = ""
    for char in message:
        if char.isalpha():
            result += (
                cipher_dict.get(char.lower(), char).upper()
                if char.isupper()
                else cipher_dict.get(char.lower(), char)
            )
        else:
            result += char

    return result