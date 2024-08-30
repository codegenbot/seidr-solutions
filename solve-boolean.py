    def solve_boolean(s):
        def bool_to_val(c):
            return c == 'T'

        def eval_expr(expr):
            if '&' in expr:
                left, right = expr.split('&')
                return eval_expr(left) and eval_expr(right)
            elif '|' in expr:
                left, right = expr.split('|')
                return eval_expr(left) or eval_expr(right)
            else:
                return bool_to_val(s)

        return eval_expr(s)