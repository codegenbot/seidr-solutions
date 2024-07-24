import math


def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return (
        initial_snow
        + math.fsum([rate_of_snowfall] * hours)
        - math.fsum([melting_rate] * hours)
    )