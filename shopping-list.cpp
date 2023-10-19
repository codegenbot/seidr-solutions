#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.
For example,
input:
1
50.0
1
100.0
output:
0.0
input:
1
50.0
1
10.0
output:
45.0
input:
2
20.0 20.0
2
100.0 50.0
output:
10.0
input:
2
20.0 20.0
2
20.0 0.0
output:
36.0
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.0
*/

void perror_exit (const char* message) {
    perror (message);
    exit (EXIT_FAILURE);
}
int main() {
    int n;
space:
    cin >> n;
    vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> n;
    vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        cin >> discounts[i];
    }

    FILE *in;

    in = fopen ("price_input.txt", "r");
    if (in == NULL) perror_exit ("price input");

    FILE *input;

    input = fopen ("discount_input.txt", "r");
    if (in == NULL) perror_exit ("discount input");

    FILE *output;

    output = fopen ("shopping_bills.txt", "w");
    if (output == NULL) perror_exit ("shopping_bills file");

    FILE *out;

    out = fopen ("output.txt", "w");
    if (out == NULL) perror_exit ("output file");

    FILE *err;

    err = fopen ("error.txt", "w");
    if (err == NULL) perror_exit ("error file");

    int a = 0;
    char buff[255];
    std::string prices_line1;

    while(fgets(buff, 255, (FILE*)in)) {

        if (a = 0) {
            prices_line1 = buff;
        } else {
            fputs (buff, output);
        }  
        printf("%s", buff);
    

        int a = 1;

        fgets(buff, 255, (FILE*)input);
        printf("%s", buff );
        fputs (buff, output);
      
        fprintf(results, "%s\n", buff );

        /*while(fgets(italy, 255, veicoli_italia))
        {
            fputs (italy, veicoli );
            printf("%s", italy);
        }*/

    }
    return 0;
}
