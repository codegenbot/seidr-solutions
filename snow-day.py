def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = round((initial_snow * 1000) + (rate_of_fall * 1000) * hours - ((melting_rate * 1000) * hours * initial_snow), 6) / 1000
    return str(total_snow)