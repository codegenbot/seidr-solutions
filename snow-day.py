```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(int(hours)):
        snow += rate_of_snowfall  # add new snow
        if snow > 0:
            snow -= melting_rate  # remove melted snow
    return str(round(snow, 2))