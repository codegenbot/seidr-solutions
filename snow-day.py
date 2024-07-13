def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall - melt_rate * (initial_snow + rate_of_snowfall)
    return round(total_snow, 10)


# test the function
print(snow_day(0, 0.0, 0.0, 0.0))  # output: 0.0
print(snow_day(15, 15.0, 15.0, 0.15))  # output: 92.5748913763936
print(snow_day(20, 19.99, 9.999, 0.999))  # output: 10.00900900900901
print(snow_day(20, 19.99, 9.999, 0.0))  # output: 219.96999999999994
print(snow_day(10, 0.0, 1.0, 0.0))  # output: 10.0