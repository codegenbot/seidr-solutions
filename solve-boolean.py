def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}

    def eval_expression(expr):
        while '&' in expr:
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
            
            result = all(eval_expression(part) for part in and_parts)
            return 'T' if result else 'F'
        
        while '|' in expr:
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
            
            result = any(eval_expression(part) for part in or_parts)
            return 'T' if result else 'F'
        
        return bool_map[expr]

    return eval_expression(expression) == 'T'