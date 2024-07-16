```
def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")
    
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = 0
    code_counts = [0] * 6
    
    for c in code:
        code_counts[ord(c) - ord('A')] += 1
    
    for i, (c, g) in enumerate(zip(code, guess)):
        if c == g:
            whites += 1
            code_counts[ord(c) - ord('A')] -= 1
    
    whites += sum(min(0, count) for count in code_counts)
    return str(min(4, whites)), str(blacks)