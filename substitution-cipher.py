def decipher(cipher_map, message):
    return "".join(
        [cipher_map[i] for i in range(len(message)) if cipher_map[i].isalpha()]
    )


if __name__ == "__main__":
    cipher1 = input()
    cipher2 = input()
    message = input()
    print(decipher(cipher1 + cipher2, message))