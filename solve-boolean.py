Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for operation, value in zip(['&', '|'], [expression.count('&'), expression.count('|')]):
            if value > 0:
                if operation == '&':
                    result = all(char != 'T' for char in expression.replace('&', '').replace('|', '')) and result
                elif operation == '|':
                    result = any(char != 'F' for char in expression.replace('&', '').replace('|', '')) or result
        return result