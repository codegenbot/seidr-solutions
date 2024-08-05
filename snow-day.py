def snow_day(hours, amount, rate, melt_rate):
    return round(amount + (rate * hours) - ((melt_rate * hours) if hours > 0 else 0), 5)