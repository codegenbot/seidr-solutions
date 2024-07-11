def decipher(cipher1, cipher2, message):
    mapping = {
        (char).islower() and k.lower() or k: (char).islower() and v.lower() or v
        for char, k, v in zip(message, cipher1, cipher2)
    }
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char)
        else:
            result += char