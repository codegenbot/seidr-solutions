Solve the following code contest problem: square-digits. Problem description: Given a positive integer, square each digit and concatenate the squares into a returned string..

Currently, the code is :
```python
def square_digits(n):
    return ''.join(str(int(i)**2) for i in str(n))
```
Modify the code as  To fix the issue with the code, you need to change the way the digits are concatenated. Currently, the code is joining the squares of each digit as strings, which results in the incorrect output. To fix this, you can convert each square to a string and then join them together using `+` operator.

Here's the corrected code:
```python
def square_digits(n):
    return ''.join(str(int(i)**2) for i in str(n))
```
You must only return correct code. Remove any triple quotes, language name or explanations.