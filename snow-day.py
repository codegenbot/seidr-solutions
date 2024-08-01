def snow_day(hours, amount, rate, melting):
    return round(amount + rate * hours - melting * hours, 8)