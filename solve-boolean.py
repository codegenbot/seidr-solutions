def solve_boolean(expression):
    precedence = {"&": 2, "|": 1}
    output = []
    
    for char in expression:
        if char.strip() in ["T", "F"]:
            output.append(char)
        elif char in ["&", "|"]:
            while len(output) > 0 and (
                output[-1] in precedence and precedence[output[-1]] >= precedence[char]
            ):
                output.pop()
            stack = []
            temp_output = []
            for c in expression:
                if c == "(":
                    stack.append(c)
                elif c == ")":
                    while len(stack) > 0 and stack[-1] != "(":
                        temp_output.append(stack.pop())
                    stack.pop()  
                elif c in ["&", "|"]:
                    while (
                        len(output) > 0
                        and output[-1] in precedence
                        and precedence[output[-1]] >= precedence[c]
                    ):
                        temp_output.append(output.pop())
                    output = temp_output + [c]
                    temp_output = []
                else:
                    if stack and stack[-1] == "(":
                        stack.pop()
                    temp_output.append(c)
            output.extend(temp_output)

    while len(output) > 0 and (
        output[0] in precedence
        and precedence[output[0]] >= precedence["&"]
    ):
        output.pop()

    return "T" if output[0] else "F"