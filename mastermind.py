def mastermind(code, guess):
    blacks = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    whites = 0
    code_count = [0] * 6
    for c in code:
        code_count[ord(c)-55]=1
    for c in code:
        if c == guess[code.index(c)]:
            blacks -= 1
        elif code_count[ord(c)-55]:
            whites += 1
        code_count[ord(c)-55] -= 1
    return str(whites), str(blacks)