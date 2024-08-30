def solve(input_str):
    message, cipher = input_str.split("\n")[:2]
    deciphered_message = "".join(
        c[0] if c in zip(message, cipher) else " " for c in message
    )
    return deciphered_message