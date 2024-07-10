def solve_boolean(input_str):
    tokens = input_str.split("|")
    for token in tokens:
        if "&" in token:
            a, b = token.split("&")
            token = str((a == 'T') and (b == 'T'))
        else:
            token = token == 'T'
    return any(map(lambda x: x == 'True', map(str, tokens)))