"""  
def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [code.count(c) for c in set(code)]
    guess_count = [guess.count(c) for c in set(guess)]

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code_count[ord(code[i]) - ord('A')] > 0 and code_count[ord(code[i]) - ord('A')] > guess_count[ord(code[i]) - ord('A')]:
            white += 1

    black_peg_limit = min(black, 4)
    for i in range(4):
        if code[i] == guess[i]:
            black -= 1
        elif black < black_peg_limit:
            break

    return black, min(white + black, 4)
"""