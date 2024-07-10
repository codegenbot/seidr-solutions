```
def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    guess_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_char = code[i]
            guess_char = guess[i]
            if code_char != guess_char:
                continue
            if code_count[ord(code_char) - ord('0')] < guess_count[ord(guess_char) - ord('0')]:
                black += 1
            else:
                white += 1
    return black, white