def get_middle(string):
    # Calculate the index of the middle character
    mid = len(string) // 2

    # Check if the middle character is present in the string
    if string[mid] in string:
        # If it is, return only that character as a string
        return string[mid]
    else:
        # Otherwise, return the two middle characters as a string
        return string[mid - 1 : mid + 2]