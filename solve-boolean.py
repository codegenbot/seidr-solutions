def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (yield from solve_boolean(''.join(map(str, queue.deque([next(yield), next(yield)])))))
            elif char == '|':
                result |= (yield from solve_boolean(''.join(map(str, queue.deque([next(yield), next(yield)]))))))
        return result