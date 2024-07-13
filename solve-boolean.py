def solve_boolean(expression):
    try:
        return eval(expression)
    except:
        return "Invalid input"


input_str = input()
print(solve_boolean(input_str))