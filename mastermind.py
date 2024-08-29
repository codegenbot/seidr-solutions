```
def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for char in code:
        code_counts[ord(char) - ord("B")] += 1

    black_pegs = 0
    white_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess_counts[ord(guess[i]) - ord("B")] < code_counts[ord(code[i]) - ord("B")]:
            white_pegs += 1
        code_counts[ord(code[i]) - ord("B")] -= 1
        guess_counts[ord(guess[i]) - ord("B")] -= 1

    return str(black_pegs), str(white_pegs)