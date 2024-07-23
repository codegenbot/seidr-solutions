import ast


def solve_boolean(expression):
    def bool_ops(x, y):
        if x and y: return "T"
        elif x or y: return "T"
        else: return "F"

    result = ""
    stack = [expression]

    while stack:
        temp = stack.pop()
        while "&" in temp:
            left, right = temp.split("&", 1)
            temp = f"{bool_ops(left, right)}"
        while "|" in temp:
            left, right = temp.split("|", 1)
            temp = f"({left}) | ({right})"
        result = temp

    return "T" if result == "True" else "F"


if __name__ == "__main__":
    while True:
        try:
            expression = input("Enter a Boolean expression: ")
            print(solve_boolean(expression))
            break
        except (NameError, SyntaxError):
            print("Invalid input. Please enter T, F, | or &.")