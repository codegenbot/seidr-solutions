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
        # Re-assign the updated expression back to itself
        expression = expression.replace(' && ', ' and ').replace(' || ', ' or ')

    return eval(f"{expression}")

if __name__ == "__main__":
    expression = input("Enter a Boolean expression: ")
    print(solve_boolean(expression))