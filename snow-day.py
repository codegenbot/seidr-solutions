import decimal

def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = decimal.Decimal(initial_snow)
    for _ in range(hours):
        total_snow = round(total_snow + decimal.Decimal(rate_of_fall) - total_snow * decimal.Decimal(melting_rate), 6)
    return str(total_snow)