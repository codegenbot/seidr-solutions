def mastermind(code, guess):
    black = 0
    white = 0

    code_count = [0] * 6
    code_index = {}

    for char in code:
        if char not in code_index:
            code_index[char] = -1
        code_index[char] += 1
        code_count[ord(char) - ord('A')] += 1

    guess_count = [0] * 6
    guess_index = {}

    for char in guess:
        if char not in guess_index:
            guess_index[char] = -1
        guess_index[char] += 1
        guess_count[ord(char) - ord('A')] += 1

    for char in code:
        if char == guess[code.index(char)]:
            black += 1
        elif guess_count[ord(char) - ord('A')] > 0:
            white += 1

    return str(black) + "\n" + str(white)