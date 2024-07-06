def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}

    def eval_expression(expr):
        if '(' in expr:
            start = expr.index('(')
            end = expr.index(')')
            return eval_expression(expr[:start] + str(eval_expression(expr[start+1:end])).lower() + expr[end+1:])
        
        if '&' in expr and '|' in expr:
            parts = expr.split('&')
            result = True
            for part in parts:
                result = result and eval_expression(part).lower()
            return 'F' if not result else 'T'

        if '|' in expr and '&' not in expr:
            parts = expr.split('|')
            result = False
            for part in parts:
                result = result or eval_expression(part).lower()
            return 'F' if not result else 'T'

        if expr[0] in bool_map:
            return str(bool_map.get(expr[0], None)).lower()

    return eval_expression(expression)