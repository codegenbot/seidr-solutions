```
def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    code_dict = {}
    for c in code:
        if c not in code_dict:
            code_dict[c] = 1
        else:
            code_dict[c] += 1

    white = 0
    black = 0

    for c, g in zip(code, guess):
        if c == g:
            if code_dict.get(c, 0) > 0:
                code_dict[c] -= 1
                black += 1
            else:
                black += 4  
                break
        elif c in code_dict:
            code_dict[c] -= 1
            white += 1

    print(f"Black pegs: {black}, White pegs: {white}")