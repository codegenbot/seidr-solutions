def solve_boolean(expression=''):
    result = True
    user_input = input("Enter Boolean expression: ")
    
    if user_input == 'T':
        result = True
    elif user_input == 'F':
        result = False
    elif '&' in user_input and '|' in user_input:
        raise ValueError('Invalid expression')
    else:
        if expression[0] == 'T':
            result = True
        else:
            result = False
        
        for op, value in zip(['&', '|'], [expression.count('&'), expression.count('|')]):
            if op == '&' and value % 2 != 0:
                result = False
            elif op == '|' and value % 2 == 0:
                result = False
        
    return result