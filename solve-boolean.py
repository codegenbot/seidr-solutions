def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        try:
            result = eval('True' + expression.replace('&', '^').replace('|', '|'))
            return result
        except Exception as e:
            print(f"Error: {str(e)}")
            return None