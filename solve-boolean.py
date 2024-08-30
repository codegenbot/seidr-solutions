Here is the solution in Python:

def solve(input):
    if input == 'T':
        return True
    elif input == 'F':
        return False
    elif input[0] == '&':
        return solve(input[1:]) and bool(int(input[0]))
    elif input[0] == '|':
        return solve(input[1:]) or bool(int(input[0]))