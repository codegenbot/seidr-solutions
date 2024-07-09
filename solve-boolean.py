```
def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    stack = []
    for char in expression:
        if char in "&|":
            b, a = stack.pop(), stack.pop()
            stack.append(str(eval(f"bool({a}) {char} bool({b})")))
        else:
            stack.append(char)
    return eval(stack[0])