```Python
def solve_boolean(expression):
    def evaluate_expression(tokens):
        stack = []
        for token in tokens.split():
            if token == 'T':
                stack.append(True)
            elif token == 'F':
                stack.append(False)
            else:
                if token[0] != '(':
                    left = stack.pop()
                    right = True if token == 'T' else False
                    stack.append(left and right or left or right)
                else:
                    i = 1
                    temp = ''
                    for char in token:
                        if char == '(':
                            i += 1
                        elif char == ')':
                            i -= 1
                            if i == 0:
                                break
                        temp += char
                    sub_expression = evaluate_expression(temp)
                    stack.append(sub_expression)
        return stack[0]
    
    return evaluate_expression(expression)

print(solve_boolean('f&t|t|t&f|f&t&f&f|f&f&f&t&f&f|t|f|f&f'))