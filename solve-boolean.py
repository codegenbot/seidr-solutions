````
def solve_boolean(expression):
    precedence = {"&": 2, "|": 1}
    stack = []
    output = []
    eval_str = ""

    for char in expression:
        if char.strip() in ["T", "F"]:
            output.append(char)
        elif char in ["&", "|"]:
            while len(stack) > 0 and (stack[-1] in precedence and precedence[stack[-1]] >= precedence[char]):
                top = stack.pop()
                while len(stack) > 0 and top in precedence and precedence[top] >= precedence[stack[-1]]:
                    if top != "(":
                        eval_str += top
                if top == "(":
                    stack.append("(")
                else:
                    eval_str += top
            stack.append(char)
        else:
            if char == "(":
                stack.append(char)
            else:
                while len(stack) > 0 and stack[-1] != "(":
                    top = stack.pop()
                    output.append(top)
                stack.pop()  # Remove the '('

    while len(stack) > 0:
        top = stack.pop()
        if top == "(":
            continue  # Don't pop the opening parenthesis
        while len(stack) > 0 and top in precedence and precedence[top] >= precedence[stack[-1]]:
            if top != "(":
                eval_str += top
        eval_str += top

    return "T" if eval_str == "T" else "F"

def main():
    expression = input("Enter a Boolean expression: ")
    print(solve_boolean(expression))

if __name__ == "__main__":
    main()