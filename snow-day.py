Here is the solution:

def snow_day(hours, ground_snow, rate_of_fall, melt_rate):
    return ground_snow + (rate_of_fall * hours) - (melt_rate * hours)

# Test cases
print(snow_day(0, 0.0, 0.0, 0.0))
print(snow_day(15, 15.0, 15.0, 0.15))
print(snow_day(20, 19.99, 9.999, 0.999))
print(snow_day(20, 19.99, 9.999, 0.0))
print(snow_day(10, 0.0, 1.0, 0.0))