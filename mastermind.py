```
def mastermind(code, guess):
    code_counts = {char: code.count(char) for char in set(code)}
    guess_counts = {char: guess.count(char) for char in set(guess)}

    white_peg_count = 0
    black_peg_count = 0
    for char in code:
        if code_counts[char] > 0 and guess_counts[char] > 0:
            if code.index(char) == guess.index(char):
                black_peg_count += 1
            else:
                white_peg_count += 1
            code_counts[char] -= 1
            guess_counts[char] -= 1

    return str(white_peg_count) + "\n" + str(black_peg_count)