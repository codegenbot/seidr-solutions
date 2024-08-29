def solve(input_str):
    cipher_pairs = input_str.split("\n")[:-1]
    deciphered_message = ""
    for char in cipher_pairs[-1]:
        deciphered_message += next(
            pair[0] if pair[0] == char else pair[1]
            for pair in [
                pair
                for pair in (pair.split() for pair in cipher_pairs)
                if pair[0] == char
            ]
        )
    return deciphered_message