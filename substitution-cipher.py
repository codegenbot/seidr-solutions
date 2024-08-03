def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = (
                ord(char.upper()) - ord("A") if char.isupper() else ord(char) - ord("a")
            )
            result += "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[index]
        else:
            result += char
    return result