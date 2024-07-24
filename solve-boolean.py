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
        if user_input[0] == 'T':
            result = True
        else:
            result = False
        
        for op, value in zip(['&', '|'], [user_input.count('&'), user_input.count('|')]):
            if op == '&' and value % 2 != 0:
                result = False
            elif op == '|' and value % 2 == 0:
                result = False
        
        return result