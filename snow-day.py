from decimal import Decimal

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    from decimal import Decimal
    current_snow = Decimal(initial_snow)
    for _ in range(hours):
        current_snow += Decimal(rate_of_snowfall)
        melted_snow = max(0, current_snow - (current_snow * Decimal((1 - melting_rate))))
        current_snow -= melted_snow
    return float(current_snow)