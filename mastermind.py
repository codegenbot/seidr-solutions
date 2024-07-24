def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_counts[ord(code[i]) - ord("A")] += 1
            guess_counts[ord(guess[i]) - ord("A")] += 1

    code_map = {}
    guess_map = {}

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] not in code_map:
            code_map[code[i]] = True
        elif guess[i] != code[i]:
            white_pegs += 1

    for k, v in code_map.items():
        if guess_map.get(k) and not v:
            white_pegs += 1
        else:
            guess_map[k] = v

    return str(black_pegs) + " " + str(white_pegs)