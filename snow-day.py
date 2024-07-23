import math


def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return round(
        math.fsum([initial_snow] + [(rate_of_snowfall - melting_rate) * hours]), 8
    )