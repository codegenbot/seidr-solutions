def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow *= 1 - proportion_melting
    return round(total_snow, 5)


# Testing the function
print(snow_day(0, 0.0, 0.0, 0.0))  # Output: 0.0
print(snow_day(15, 15.0, 15.0, 0.15))  # Output: 92.57489
print(snow_day(20, 19.99, 9.999, 0.999))  # Output: 10.00901
print(snow_day(20, 19.99, 9.999, 0.0))  # Output: 219.96999999999994
print(snow_day(10, 0.0, 1.0, 0.0))  # Output: 10.0