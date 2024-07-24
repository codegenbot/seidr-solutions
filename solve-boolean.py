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
        for i in range(len(user_input)):
            if user_input[i] == '&':
                result = result and (user_input[i+1] == 'T')
            elif user_input[i] == '|':
                result = result or (user_input[i+1] == 'T')
        return result