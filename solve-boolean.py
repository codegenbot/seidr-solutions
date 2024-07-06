def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}
    op_stack = []
    result = None

    def eval_expression(expr):
        nonlocal result
        while expr:
            if expr[0] in ['|', '&']:
                op_stack.append(expr[0])
                expr = expr[1:]
            elif op_stack and op_stack[-1] == '&' and expr[0] == '|':
                result = True
                break
            else:
                part = ''
                while expr and expr[0] != '|' and expr[0] != '&':
                    part += expr[0]
                    expr = expr[1:]
                if expr:
                    op_stack.append(part)
                else:
                    return bool_map[part]
        if op_stack:
            if len(op_stack) == 2:
                a, b = op_stack
                result = (a == '&' and bool_map[a[1:]] and bool_map[b]) or (a == '|' and bool_map[a[1:]] or bool_map[b])
            else:
                for _ in range(len(op_stack)):
                    op = op_stack.pop(0)
                    if op == '|':
                        result = any(eval_expression(part) for part in [op_stack.pop(0), op_stack.pop(0)])
                    elif op == '&':
                        result = all(eval_expression(part) for part in [op_stack.pop(0), op_stack.pop(0)])

        return result

    return eval_expression(expression)