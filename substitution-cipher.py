def get_deciphered_message(cipher, message):
    deciphered_message = ""
    for i in range(len(message)):
        deciphered_message += cipher[message[i]]
    return deciphered_message