def solve_boolean(expression):
    stack = []
    parsing = True
    for char in expression:
        if char in ['T', 'F']:
            if not parsing:
                return ''.join(map(str, stack)) == 'TF' and len(stack) == 1
            stack.append(char)
        stack.append(char) if char in ['|', '&'] else parsing = char not in ['T', 'F']
    return ''.join(map(str, stack)) == 'TF' and len(stack) == 1