
#include <iostream>
#include <numeric>

using namespace std;


struct fraction 
{
    int numerator;
    int denominator;
};


fraction Sum(fraction a, fraction b) {
    fraction result;

    result.denominator = a.denominator * b.denominator;
    result.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);

    return result;
}

/*

5 % 2 = 1 

*/

/*
n/m

O(?) <= O(min(n, m))

n = 2 * p
m = 3 * p

min(n, m) / p = 2

O(p) = O(2p) = O(min(n, m))

*/
fraction Simplify(fraction a) {
    fraction result = a;
    // O(log (n + m))
    //int Greatest_Common_Factor = gcd(a.numerator, a.denominator);

    //result.numerator = a.numerator / Greatest_Common_Factor;
    //result.denominator = a.denominator / Greatest_Common_Factor;

    // O(sqrt(min(n, m)))
    for(int i = min(result.numerator, result.denominator); i > 1; --i) {
        if(result.numerator % i) {
            result.numerator /= i;
            result.denominator /= i;
            break;
        }
    }

    return result;
}

int main() {
    fraction one;
    fraction two;
    
    cin >> one.numerator >> one.denominator;
    cin >> two.numerator >> two.denominator;

    fraction result;
    result = Simplify(Sum(one, two)) ;
    cout << result.numerator << ' ' << result.denominator << '\n';
}


/*
a
*/

/*
1/3, 1/2 
denominator * denominator 
*/
