"""
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of
floats representing the percent discount of each of those goods, return the total price of the
shopping trip after applying the discount to each item.
"""

def ShoppingTrip(input1,input2):
    """
        For example,
        input:
        1
        50.0
        1
        100.0
        output:
        0.0
        input:
        1
        50.0
        1
        10.0
        output:
        45.0
        input:
        2
        20.0 20.0
        2
        100.0 50.0
        output:
        10.0
        input:
        2
        20.0 20.0
        2
        20.0 0.0
        output:
        36.0
        input:
        3
        10.0 20.0 30.0
        3
        5.0 10.0 95.0
        output:
        29.0
    """
    if input1.shape[0] != input2.shape[0]:
        return None
    price = 0
    for i in range(input1.shape[0]):
        price += input1[i]*(1-input2[i]/100)
    return price

input1 = np.array([1, 2, 3])
input2 = np.array([100, 95, 5])
ShoppingTrip(input1, input2)
