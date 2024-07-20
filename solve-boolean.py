```
def solve_boolean(expression):
    stack = []
    parsing = True
    for char in expression:
        if char in ['T', 'F']:
            if not parsing:
                temp = ''.join(map(str, stack))
                stack.clear()
                stack.append(char)
            else:
                stack.append(char)
        elif char in ['|', '&']:
            while len(stack) > 1 and stack[-2] in ['|', '&']:
                a = stack.pop(); b = stack.pop()
                stack.append({ '|': lambda x, y: x or y, '&': lambda x, y: x and y }[a](b == 'T', char == '|'))
            parsing = (char == '|')
    return eval(''.join(map(str, stack)))