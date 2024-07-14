from collections import Counter

def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "Invalid input. Please enter a 4-character code and guess."
    
    code_counts = Counter(code)
    guess_counts = Counter(guess)
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    white_pegs = sum(min(count, code_counts[c]) - 1 for c in set(guess))
    return str(black_pegs) + "\n" + str(white_pegs)