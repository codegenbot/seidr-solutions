```
def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    white = 0
    black = 0

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('A')] += 1

    for c in guess:
        if c == code[0]:
            if code_count[ord(c) - ord('A')] > 0:
                black += 1
                code_count[ord(c) - ord('A')] -= 1
            else:
                black += 1
        elif code_count[ord(c) - ord('A')] > 0:
            white += 1
            code_count[ord(c) - ord('A')] -= 1

    print(f"Black pegs: {black}, White pegs: {white}")