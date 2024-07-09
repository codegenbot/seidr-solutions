def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(int(hours)):
        snow += rate_of_fall  # apply snowfall
        snow *= (1 - melting_rate)  # then apply melting effect
    return round(snow, 6)

print(snow_day(10, 3.0, 2.5, 0.4))