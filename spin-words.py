import string

def spin_words():
    # Prompt the user for input
    string = input("Enter a string: ")
    
    # Split the input string into words
    words = string.split()
    
    # Reverse the order of words that are five or more letters long
    reversed_words = [word[::-1] for word in words if len(word) >= 5]
    
    # Join the reversed words back together
    result = " ".join(reversed_words)
    
    # Print the resulting string
    print("The spin-words result is:", result)