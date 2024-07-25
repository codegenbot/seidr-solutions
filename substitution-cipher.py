def substitution_cipher(cipher, message):
    deciphered = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                deciphered += chr(
                    (ord(cipher[0].upper()) - ord("A") + ord(char.upper())) % 26
                    + ord("A")
                )
            else:
                deciphered += chr(
                    (ord(cipher[1].lower()) - ord("a") + ord(char.lower())) % 26
                    + ord("a")
                )
        else:
            deciphered += char
    return deciphered


cipher = input().strip()
message = input().strip()
print(substitution_cipher(cipher, message))