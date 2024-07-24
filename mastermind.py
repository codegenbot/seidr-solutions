Here is the solution:

def mastermind(code, guess):
    correct_placement = 0
    correct_color = 0
    
    for i in range(4):
        if code[i] == guess[i]:
            correct_placement += 1
        elif str(code[i]) in str(guess):
            correct_color += 1
            
    return str(correct_placement) + '\n' + str(correct_color)