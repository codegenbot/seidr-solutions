Here is the solution:

def mastermind(code, guess):
    correct_positions = 0
    correct_colors = 0
    
    for i in range(4):
        if code[i] == guess[i]:
            correct_positions += 1
        elif str(guess[i]) in code:
            correct_colors += 1
            
    return correct_positions, correct_colors