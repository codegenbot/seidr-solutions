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
            if current_operator:
                stack.append(ops[current_operator](stack.pop(), stack.pop()))
            current_operator = char
        elif char == '(':
            while expression[expression.index(char)+1:] and expression[expression.index(char)+1:] != ')':
                current_operator += expression[expression.index(char)+1]
            continue
        else:
            if char == ')':
                while current_operator:
                    stack.append(ops[current_operator](stack.pop(), stack.pop()))
                    current_operator = ''
    return stack[0]