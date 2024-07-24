def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        operators = []
        result = True if expression[0] == 't' else False
        for char in expression:
            if char in '&|':
                operators.append(char)
            elif char == 't':
                result = (result & (char == '&' or len(operators) % 2 == 1)) | ((char == '|' and len(operators) % 2 != 0))
            else:
                raise ValueError("Invalid expression")
        return result