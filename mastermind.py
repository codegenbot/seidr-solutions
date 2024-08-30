def mastermind(code, guess):
    code_count = [code.count(char) for char in set(code)]
    guess_count = [guess.count(char) for char in set(guess)]
    white_peg = 0
    black_peg = 0

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_peg += 1
        elif code_count[ord(code[i]) - ord("A")] > 0:
            white_peg += 1
            code_count[ord(code[i]) - ord("A")] -= 1

    return black_peg, white_peg