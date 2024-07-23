def substitution_cipher(cipher1, message):
    result = ""
    for char in message:
        if char.isalpha():
            base = ord("A") if char.isupper() else ord("a")
            result += chr((ord(char) - base + ord(cipher1[0].upper()) - ord("A")) % 26 + base)
        else:
            result += char
    return result


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, message))