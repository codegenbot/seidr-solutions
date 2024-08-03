def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("B")] -= 1
            guess_count[ord(guess[i]) - ord("B")] -= 1
        else:
            guess_count[ord(guess[i]) - ord("B")] += 1

    black_pegs = sum(1 for count in code_count if count == 0)
    white_pegs = sum(
        min(count, guess_count[ord(char) - ord("B")])
        for char in "BOYGB"
        for count in [
            code_count[ord(char) - ord("B")],
            guess_count[ord(char) - ord("B")],
        ]
        if count > 0
    )

    return str(white_pegs), str(black_pegs)