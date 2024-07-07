```
def mastermind(code, guess):
    code_count = {}
    for i in range(4):
        if code[i] == guess[i]:
            code_count[code[i]] = code_count.get(code[i], 0) + 1
    white_peg = sum([1 for c in set(guess) if code_count.get(c, 0) > 0 and code.count(c) < 1])
    black_peg = sum([1 for i in range(4) if guess[i] == code[i]])
    return str(white_peg) + "\n" + str(black_peg)