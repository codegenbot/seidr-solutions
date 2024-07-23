```
import ast

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    while ' && ' in expression or ' || ' in expression:
        if ' && ' in expression:
            left, right = expression.split(' && ')
            expression = f"({str(bool(solve_boolean(left)))} and {str(bool(solve_boolean(right)))})"
        elif ' || ' in expression:
            left, right = expression.split(' || ')
            expression = f"({str(bool(solve_boolean(left)))} or {str(bool(solve_boolean(right)))})"

    return eval(f"not not {''.join(expression.split('T'))}" if ''.join(expression.split('F')).strip() == '' else "False")

if __name__ == "__main__":
    expression = input("Enter a Boolean expression: ")
    print(solve_boolean(expression))