def snow_day(hours, initial_snow, rate, melting_rate):
    return round(initial_snow + rate * hours - melting_rate * hours, 5)