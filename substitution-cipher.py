```
def substitution_cipher(cipher1, cipher2, message):
    combined_cipher = "".join([s for pair in zip(cipher1, cipher2) for s in pair])
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(combined_cipher[0].upper()) - ord("A") + ord(char.upper()) - ord("A")) % 26 + ord("A"))
            else:
                result += chr((ord(combined_cipher[0].lower()) - ord("a") + ord(char.lower()) - ord("a")) % 26 + ord("a"))
        else:
            result += char
    return result


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, cipher2, message))