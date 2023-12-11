def calculate_snow(hours, initial_snow, snow_fall, melt_rate):
    for hour in range(int(hours)):
        new_snow = snow_fall * (1 - math.exp(-melt_rate * hour))
        initial_snow += new_snow
    return initial_snow