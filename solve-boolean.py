import ast
import operator

def solve_boolean(expression):
    ops = {
        '|': operator.or_,
        '&': operator.and_
    }

    if expression == "T":
        return True
    elif expression == "F":
        return False

    try:
        tree = ast.parse(f"result = {expression}", mode='eval')
        code = compile(tree.body[0], 'code', 'exec')
        exec(code)
        return eval('result')
    except (NameError, SyntaxError):
        return None

if __name__ == "__main__":
    while True:
        try:
            expression = input("Enter a Boolean expression: ")
            print(solve_boolean(expression))
            break
        except (NameError, SyntaxError):
            print("Invalid input. Please enter T, F, | or &.")