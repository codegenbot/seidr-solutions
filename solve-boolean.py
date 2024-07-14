def solve_boolean(expression):
    def evaluate():
        stack = []
        while len(stack) > 0:
            op1 = stack.pop()
            op2 = stack.pop()
            if op1 in ["&", "|"]:
                if op1 == "&":
                    stack.append("T" if op2 == "F" else "F")
                else:
                    stack.append("T" if op2 != "F" else "F")
            else:
                stack.append(op1)
        return "T" if stack[0] == "T" else "F"

    precedence = {"&": 2, "|": 1}
    stack = []
    output = []

    for char in expression:
        if char.strip() in ["T", "F"]:
            output.append(char)
        elif char in ["&", "|"]:
            while len(stack) > 0 and (
                stack[-1] in precedence and precedence[stack[-1]] >= precedence[char]
            ):
                output.append(stack.pop())
            stack.append(char)
        else:
            if char == "(":
                stack.append(char)
            else:
                stack.append(char)

    return evaluate()