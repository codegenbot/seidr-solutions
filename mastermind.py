Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord('A')] += 1

    white_pegs = sum(min(code_count[i], guess.count(chr(i + ord('A')))) for i in range(6))
    black_pegs = sum(min(c, g) for c, g in zip(map(code_count.__getitem__, range(6)), map(guess.count, 'ABCEF')))
    return str(black_pegs), str(white_pegs)

print(mastermind("RRRR", "RRRR"))
print(mastermind("BOYG", "GYOB"))
print(mastermind("WYYW", "BBOG"))
print(mastermind("GGGB", "BGGG"))
print(mastermind("BBBB", "OOOO"))