```
def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}

    def eval_expression(expr):
        : while '&' in expr:
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
            return str(result).lower() if result else 'F'

        : while '|' in expr:
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
            return str(result).lower() if result else 'F'

        : if len(expr) > 0 and expr[0] in bool_map:
            return str(bool_map.get(expr[0], None)).lower()
        else:
            return 'F'
    : return eval_expression(expression)