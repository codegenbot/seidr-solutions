```
def solveBoolean(expression):
    def or_(x, y):
        return x or y
    def and_(x, y):
        return x and y
    
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        parts = expression.split('&')
        return all(and_(part.strip().startswith('T'), not part.strip().startswith('F')) for part in parts)
    elif '|' in expression:
        parts = expression.split('|')
        return any(or_(part.strip().startswith('T'), not part.strip().startswith('F')) for part in parts)