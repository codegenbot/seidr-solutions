def snow_day(hours, initial_snow, snow_fall, melting_rate):
    snow = initial_snow
    for i in range(1, hours + 1):
        new_snow = snow_fall * (1 - math.exp(-melting_rate * i))
        snow += new_snow - new_snow * melting_rate * i
    return snow