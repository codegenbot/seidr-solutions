```
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
            
            all_true = True
            for part in and_parts:
                if not eval_expression(part):
                    all_true = False
                    break
            return 'T' if all_true else 'F'
        
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
            
            any_true = False
            for part in or_parts:
                if eval_expression(part) == 'T':
                    any_true = True
                    break
            return 'F' if not any_true else 'T'
        
        return bool_map[expr]

    return eval_expression(expression)