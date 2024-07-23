def substitution_cipher(cipher1, cipher2, message):
    mapping = {char1: char2 for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result


def main():
    cipher1 = input("Enter the first string: ")
    cipher2 = input("Enter the second string: ")
    message = input("Enter the message to decipher: ")
    print(substitution_cipher(cipher1, cipher2, message))


if __name__ == "__main__":
    main()