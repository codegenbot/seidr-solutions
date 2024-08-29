def solveBoolean(input):
    if input == "T":
        return True
    elif input == "F":
        return False
    elif "&" in input:
        left, right = input.split("&")
        return bool(left) and bool(right)
    elif "|" in input:
        left, right = input.split("|")
        return bool(left) or bool(right)