def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = float(initial_snow) + rate_of_fall - (melting_rate * float(initial_snow))
    for _ in range(1, hours+1):
        new_snow = total_snow + rate_of_fall - (melting_rate * total_snow)
        total_snow = round(new_snow, 6)
    return str(round(total_snow, 6))