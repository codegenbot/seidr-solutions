def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    return int(initial_snow) + (int(int(rate_of_fall * hours))) - (int(int(melting_rate * hours)))