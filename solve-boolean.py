Here is the solution to the problem:

def solve_boolean(expression):
    result = True if expression == 't' else False
    for char in expression:
        if char == '&':
            result &= True if next_char == 't' else False
        elif char == '|':
            result |= True if next_char == 't' else False
        try:
            next_char = next(char for char in expression[expression.index(char)+1:] if char in 'tf')
        except StopIteration:
            pass
    return result