```
def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}

    def eval_expression(expr):
        stack = []
        i = 0
        while i < len(expr):
            if expr[i] in ('(', '|', '&'):
                if expr[i] == '(':
                    stack.append(expr[i])
                    i += 1
                elif expr[i] in ('|', '&'):
                    j = i + 1
                    while j < len(expr) and expr[j] not in ('|', '&', '(', ')'):
                        j += 1
                    if expr[j] == '(':
                        stack.append('(')
                    else:
                        stack.append(expr[i:j+1])
                        i = j
                elif expr[i] == ')':
                    while stack[-1] != '(':
                        stack.pop()
                    stack.pop()
                    i += 1
            elif expr[i] in bool_map:
                return str(bool_map.get(expr[i], None)).lower()
            i += 1

        while len(stack) > 0 and stack[-1] == '(':
            stack.pop()

        if len(stack) == 1:
            return stack[0].upper() if stack[0][0].isalpha() else bool_map[stack[0]]
        elif '&' in stack:
            return all(eval_expression(s) for s in stack)
        else:
            return any(eval_expression(s) for s in stack)

    return eval_expression(expression.lower())