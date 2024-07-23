def mastermind(code, guess):
    white_peg = 0
    black_peg = 0
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif guess[i] in [chr(x + ord("B")) for x in range(6)]:
            white_peg += 1

    return str(white_peg) + "\n" + str(black_peg)