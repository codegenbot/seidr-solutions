def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1
    white = sum(
        min(count, count_guess)
        for count, count_guess in zip(code_count, [guess.count(c) for c in code])
    )
    black = sum(min(a, b) for a, b in zip(code_count, [count for count in code_count]))
    return str(4 - black), str(black)


print(mastermind("RRRR", "RRRR"))
print(mastermind("BOYG", "GYOB"))
print(mastermind("WYYW", "BBOG"))
print(mastermind("GGGB", "BGGG"))
print(mastermind("BBBB", "OOOO"))