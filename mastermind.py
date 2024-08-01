def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for c in code:
        code_count[ord(c) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("B")] -= 1
            guess_count[ord(guess[i]) - ord("B")] -= 1
        else:
            guess_count[ord(guess[i]) - ord("B")] += 1

    black_peg = sum([x for x in code_count if x > 0])
    white_peg = sum(
        [x for x in guess_count if x > 0 and x < code_count[ord(x) - ord("B")]]
    )

    return str(white_peg), str(black_peg)