```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= evaluate_char()
            elif char == '|':
                result |= evaluate_char()
            else:
                if char == 't':
                    result = True
                else:
                    result = False
        return result

def evaluate_char():
    if input().strip() == 't':
        return True
    else:
        return False

if __name__ == "__main__":
    while True:
        expression = input().strip()
        try:
            print(solve_boolean(expression))
        except ValueError as e:
            print(str(e))