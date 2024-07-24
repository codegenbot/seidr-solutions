def solve_boolean(expression=""):
    result = True
    user_input = input("Enter Boolean expression: ")
    
    if user_input == 'T':
        return True
    elif user_input == 'F':
        return False
    elif '&' in user_input and '|' in user_input:
        raise ValueError('Invalid expression')
    else:
        for i, c in enumerate(user_input):
            if c == '&':
                result = result and (user_input[i+1:] == 'T')
            elif c == '|':
                result = result or (user_input[i+1:] == 'T')
        return result