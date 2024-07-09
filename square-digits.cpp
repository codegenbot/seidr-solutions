```
string output;
cout << "Enter a positive integer: ";
getline(cin, input); 
output = squareDigits(input);
cout << "Squared digits: " << output << endl;
return 0;