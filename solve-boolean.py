def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}

    def eval_expression(expr):
        if '&' in expr:
            start = 0
            end = 0
            for i in range(len(expr) - 1, -1, -1):
                if expr[i] == '&':
                    start = i
                elif expr[i] == '|':
                    end = i
                    break
            and_parts = expr[:end + 1].split('&')
            expr = expr[start + 1:]
            
            return all(eval_expression(part) for part in and_parts)
        elif '|' in expr:
            start = 0
            end = 0
            for i in range(len(expr) - 1, -1, -1):
                if expr[i] == '|':
                    start = i
                elif expr[i] == '&':
                    end = i
                    break
            or_parts = expr[:end + 1].split('|')
            expr = expr[start + 1:]
            
            return any(eval_expression(part) for part in or_parts)
        else:
            return bool_map[expr]

    return eval_expression(expression)