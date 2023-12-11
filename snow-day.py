def snow_day(hours, initial_snow, snow_fall, melt_rate):
    # Calculate the amount of snow on the ground after each hour
    snow = initial_snow
    for i in range(hours):
        snow += snow_fall
        snow *= (1 - melt_rate)
    return snow