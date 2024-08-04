Here is the solution:

def snow_day(hours, ground_snow, fall_rate, melt_rate):
    return (ground_snow + hours * fall_rate) - (hours * melt_rate)

# Test cases
print(snow_day(0, 0.0, 0.0, 0.0)) 
print(snow_day(15, 15.0, 15.0, 0.15))
print(snow_day(20, 19.99, 9.999, 0.999))
print(snow_day(20, 19.99, 9.999, 0.0))
print(snow_day(10, 0.0, 1.0, 0.0))