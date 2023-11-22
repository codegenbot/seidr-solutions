def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6
    guess_count = [0] * 6
    
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_index = ord(code[i]) - ord('A')
            guess_index = ord(guess[i]) - ord('A')
            if code_index >= 0 and code_index < 6:
                code_count[code_index] += 1
            if guess_index >= 0 and guess_index < 6:
                guess_count[guess_index] += 1
    
    for i in range(6):
        white_pegs += min(code_count[i], guess_count[i])
    
    return white_pegs, black_pegs

code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)