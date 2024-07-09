def decipher_message(key1, key2, message):
    """
    Deciphers a given message using the provided substitution cipher.

    Parameters:
    key1 (str): The first string of the cipher.
    key2 (str): The second string of the cipher.
    message (str): The message to be deciphered.

    Returns:
    str: The deciphered message.
    """
    key1 = key1.lower()
    key2 = key2.lower()

    cipher_dict = {c: k for c, k in zip(key1, key2)}

    result = ""

    for char in message:
        if char.isalpha():
            result += (
                cipher_dict.get(char.lower(), char).upper()
                if char.isupper()
                else cipher_dict.get(char.lower(), char)
            )
        else:
            result += char

    return result