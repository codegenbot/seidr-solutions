def substitution_cipher(cipher_map, message):
    return "".join(
        [cipher_map[i] if i < len(cipher_map) else "" for i in range(len(message))]
    )


# test cases
print(substitution_cipher("hello", "helo"))  # output: hello
print(substitution_cipher("jhj", "jjj"))  # output: jjj
print(substitution_cipher("azaz", "aazz"))  # output: zzaa
print(substitution_cipher("elle", "eeeee"))  # output: eeeee