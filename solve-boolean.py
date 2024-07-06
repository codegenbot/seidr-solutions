```python
def solve_boolean(expression):
    def evaluate(part):
        parts = part.split('|')
        return any(p != 'F' for p in parts) if '&' not in part else all(evaluate(p) for p in part.split('&'))

    return evaluate(expression)