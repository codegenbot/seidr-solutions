def snow_day(hours, amount, rate, melt_rate):
    return round(amount + rate * hours - melt_rate * hours, 5)