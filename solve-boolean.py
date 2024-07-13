def solve_boolean(expression):
    try:
        expression = expression.replace('&', 'and').replace('|', 'or')
        return eval(expression)
    except:
        return False

input_str = input()
print(solve_boolean(input_str))