def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("A")] += 1
    for i in range(4):
        code_count[ord(guess[i]) - ord("A")] -= 1

    black_pegs = sum(
        [min(code_count[i], guess.count(chr(ord("A") + i))) for i in range(6)]
    )

    white_pegs = 4 - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)