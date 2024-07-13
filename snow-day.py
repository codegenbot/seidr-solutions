def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = 0
    current_snow = initial_snow
    for _ in range(hours):
        new_snow = current_snow + rate_of_snowfall - (current_snow * melt_rate)
        total_snow += new_snow
        current_snow = new_snow
    return round(total_snow, 2)

print(snow_day(4, 10.0, 3.5, 0.7))