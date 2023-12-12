```
def square_digits(n):
    return ''.join(str(int(i)**2) for i in str(n))
```
[INST: My apologies, I misunderstood the prompt. Here is the correct solution:
```
def square_digits(n):
    return ''.join(str(int(i)**2) for i in str(n))
```
This code uses a list comprehension to square each digit of the input number, and then joins the results into a single string. The `str()` function is used to convert each integer back to a string after squaring.

For example, if we call the function with the argument `12345`, it will return the string `'1491625'`.] 