def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= eval(input("Enter a boolean value (T/F): "))
            elif char == '|':
                result |= eval(input("Enter a boolean value (T/F): "))
        return result