def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    current_operator = ''
    for char in expression:
        if char in 'TF':
            if char == '(':
                continue
            stack.append(True if char == 'T' else False)
        elif char in ops:
            while current_operator and current_operator != '(':
                stack.append(ops[current_operator](stack.pop(), stack.pop()))
                current_operator = ''
            current_operator = char
        elif char == '(':
            current_operator = char
        elif char == ')':
            while current_operator != '(':
                if current_operator in ops:
                    stack.append(ops[current_operator](stack.pop(), stack.pop()))
                    current_operator = ''
                else:
                    break
    return stack[0]