def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise Exception("Invalid expression")
    else:
        result = eval(" ".join(map(lambda x: str(x), list(s))))
        return result