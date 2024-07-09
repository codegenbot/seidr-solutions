def substitution_cipher(cipher1, cipher2, message):
    mapping = {char: cipher2[i] for i, char in enumerate(cipher1)}
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping[char.lower()].lower() if char.islower() else mapping[char.lower()].upper()
        else:
            result += char
    return result