/*
 * projecteuler.net, Problem 1 :
 *
 * Add all the natural numbers below one thousand that are multiples of 3 or 5.
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, 
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    const int max = 1000;
    int sum = 0;
    int cols = 0;

    for (int i = 1; i < max; i++)
            if (i % 3 == 0 || i % 5 == 0) {
                    // print plus sign before every number
                    // except the first one
                    if (sum != 0)
                            cout << " + ";

                    // How many numbers should be printed per line
                    if (cols++ % 30 == 0)
                            cout << endl;

                    // print an integer, padded on left with spaces
                    cout << setw(3) << i;

                    sum += i;
            }
    cout << " = " << sum << endl;
    return 0;
}