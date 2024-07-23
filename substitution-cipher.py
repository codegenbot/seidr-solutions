def substitution_cipher(cipher, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr(
                    (ord(cipher[0].upper()) - ord("A") + ord(char.upper()) - ord("A"))
                    % 26
                    + ord("A")
                )
            else:
                result += chr(
                    (ord(cipher[0].lower()) - ord("a") + ord(char.lower()) - ord("a"))
                    % 26
                    + ord("a")
                )
        else:
            result += char
    return result


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, message))