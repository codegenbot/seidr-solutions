def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                index = ord(char) - ord("a")
                result += chr(
                    ord(cipher2[index]) if cipher2[index].isalpha() else cipher2[index]
                )
            else:
                index = ord(char.lower()) - ord("a")
                result += chr(
                    ord(cipher2[index].upper())
                    if cipher2[index].isalpha()
                    else cipher2[index]
                ).upper()
        else:
            result += char
    return result