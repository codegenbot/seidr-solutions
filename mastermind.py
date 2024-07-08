def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1

    guess_count = [0] * 6
    for char in guess:
        guess_count[ord(char) - ord("A")] += 1

    white_pegs = sum(min(code_count[i], guess_count[i]) for i in range(6))
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])

    return str(white_pegs) + "\n" + str(black_pegs)