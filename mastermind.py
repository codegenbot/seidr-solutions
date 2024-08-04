def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1
    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("A")] -= 1
            guess_count[ord(guess[i]) - ord("A")] -= 1
    white_pegs = sum(min(count, 1) for count in guess_count)
    black_pegs = (
        sum((code_count[i] > 0 and guess_count[i] > 0) for i in range(6)) - white_pegs
    )
    return str(black_pegs), str(white_pegs)