def get_snow_amount(hours, snowfall_rate, melting_rate):
    snow_on_ground = 0.0
    for hour in range(hours):
        new_snow = snowfall_rate * (1 - math.exp(-melting_rate * hour))
        snow_on_ground += new_snow
    return snow_on_ground