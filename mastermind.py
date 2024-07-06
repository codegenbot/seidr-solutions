```
def mastermind(code, guess):
    black = 0
    white = 0
    
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('0') + 6 if 'A' <= c <='F' else ord(c) - ord('0')] += 1
        
    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
        elif code_count[ord(c) - ord('0') + 6 if 'A' <= c <='F' else ord(c) - ord('0')] > 0:
            white += 1
            code_count[ord(c) - ord('0') + 6 if 'A' <= c <='F' else ord(c) - ord('0')] -= 1
        
    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

black, white = mastermind(code, guess)

print(f"Black pegs: {black}, White pegs: {white}")