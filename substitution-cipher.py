def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                index = ord(char) - ord("A")
            else:
                index = ord(char) - ord("a")
            result += cipher2[index].lower()  
        else:
            result += char
    return result