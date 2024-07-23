```
def solve_boolean(expression):
    def eval_expr(tokenized):
        if not tokenized:
            return False

        def evaluate_token(token):
            return token == 'T'

        memo = {}

        def recursive_eval(tokens, idx=0):
            if idx >= len(tokens):
                return False

            token = tokens[idx]
            if token in memo:
                return memo[token]

            if token in ('T', 'F'):
                result = evaluate_token(token)
                memo[token] = result
                return result
            elif token == '|':
                left = recursive_eval(tokens, idx + 1)
                right = recursive Eval(tokens[idx+1:])
                memo[token] = left or right
                return memo[token]
            elif token == '&':
                left = recursive_eval(tokens, idx + 1)
                right = recursive_Eval(tokens[idx+1:])
                memo[token] = left and right
                return memo[token]

        result = recursive_eval(tokenized.split())
        return result

    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    return eval_expr(tokens)