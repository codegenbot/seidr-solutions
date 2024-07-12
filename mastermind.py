def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("A")] += 1
    for i in range(4):
        guess_count[ord(guess[i]) - ord("A")] += 1

    white_peg = sum(min(code_count, guess_count))

    black_peg = 0
    code_index = [i for i in range(4)]
    for i in range(4):
        if guess[i] == code[i]:
            code_index.pop(i)
            black_peg += 1

    return str(black_peg) + "\n" + str(white_peg)