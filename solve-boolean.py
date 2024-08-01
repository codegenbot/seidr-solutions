def solve_boolean(boolean_expression):
    result = True if boolean_expression == 't' else False
    
    for i in range(len(boolean_expression) - 1):
        if boolean_expression[i] in ['|', '&']:
            left = bool(result)
            right = True if boolean_expression[i+1] == 't' else False
            result = (left and right) if boolean_expression[i] == '&' else (left or right)

    return result