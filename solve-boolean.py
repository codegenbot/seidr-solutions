def solve_boolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str and "|" in input_str:
        return eval(" ".join(map(str, input_str.split("&|"))))
    else:
        ops = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
        stack = []
        for char in reversed(input_str):
            if char in ops:
                right = stack.pop()
                left = stack.pop()
                stack.append(ops[char](left, right))
            else:
                stack.append(char == "T")
        return stack[0]