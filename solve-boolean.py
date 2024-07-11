```
def solve(expression):
    expression = expression.upper()
    
    if "&" in expression:
        parts = [part.strip() for part in expression.split("&")]
        return all(solve(part) for part in parts)
    
    elif "|" in expression:
        parts = [part.strip() for part in expression.split("|")]
        return any(solve(part) for part in parts)
    
    else:
        if expression == "T":
            return True
        else:
            return False

expression = input()
while "T" in expression or "F" in expression:
    if "T" in expression:
        expression = expression.replace("T", "")
    else:
        expression = expression.replace("F", "")

print("Result:", "True" if solve(expression) else "False")