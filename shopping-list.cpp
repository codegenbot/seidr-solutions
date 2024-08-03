total_price += prices[i] * (1.0 - discounts[i] / 100.0);
total_price = round(total_price * 100) / 100; // Round to two decimal places