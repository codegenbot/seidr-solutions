def decipher():
    key1 = input("Enter the first string: ")
    key2 = input("Enter the second string: ")
    message = input("Enter the message to be deciphered: ")

    result = ""
    for char in message:
        if char in key2:
            orig_case = any(c.isupper() for c in key1[message.index(char):].upper())
            mapping = {char1: char2 for char1, char2 in zip(key1, key2)}
            result_char = mapping[char]
            result += result_char.upper() if orig_case else result_char.lower()
        else:
            result += char

    print("Deciphered message: " + result)

if __name__ == "__main__":
    decipher()