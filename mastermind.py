import collections

def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_counts[code[i]] -= 1
            guess_counts[guess[i]] -= 1
    
    for color in code_counts:
        white_pegs += min(code_counts[color], guess_counts[color])
    
    return white_pegs, black_pegs

code = input("Enter the code: ")
guess = input("Enter the guess: ")
result = mastermind(code, guess)
print(result[0])
print(result[1])