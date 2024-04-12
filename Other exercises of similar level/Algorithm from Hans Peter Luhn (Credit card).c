/*
American Express uses 15-digit numbers.
MasterCard uses 16-digit numbers.
Visa uses 13- and 16-digit numbers.
All American Express numbers start with 34 or 37; 
most MasterCard numbers start with 51, 52, 53, 54, or 55 (they also have some other potential starting numbers which we won’t concern ourselves with for this problem); 
and all Visa numbers start with 4.

Credit card numbers also have a “checksum” built into them, a mathematical relationship between at least one number and others. That checksum enables computers (or humans who like math) to detect typos (e.g., transpositions), if not fraudulent numbers, without having to query a database, which can be slow. 
Most cards use an algorithm invented by Hans Peter Luhn of IBM. According to Luhn’s algorithm, you can determine if a credit card number is (syntactically) valid as follows:
Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
Add the sum to the sum of the digits that weren’t multiplied by 2.
If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

Examples to test

American Express:
378282246310005
371449635398431
378734493671000
Mastercard:
5105105105105100
Visa:
4111111111111111
4012888888881881
4222222222222
*/

#include <stdio.h>
#include <stdint.h> //uint64_t

int main() {

    uint64_t cardNumber;
    int sumEven = 0, sumOdd = 0, position = 1;
    printf("Number: "); 
    scanf("%llu", &cardNumber);
    uint64_t originalCardNumber = cardNumber;

    while(cardNumber > 0) {
        int digit = cardNumber % 10; //get the last digit

        if (position % 2 == 0) { //even pos 
           
            int multipliedDigit = digit * 2;
            if (multipliedDigit > 9) { //if it has 2 digits
                	sumEven += (multipliedDigit / 10) + (multipliedDigit % 10);
            } else { //if one digit
                sumEven += multipliedDigit; 
            }
            
        } else {
            sumOdd += digit; //since I'm not multiplying and only taking 1 digit there's no need to check if it's >9
        }
        
        cardNumber /= 10; //next digit
        position++;
    }

    int totalSum = sumEven + sumOdd;
    position--; //a crutch 
    //tests
    //printf("TotalSum: %d\n", totalSum);
   // printf("position: %d\n", position);

    if (totalSum % 10 == 0)
    {
        if ((position == 15 && (originalCardNumber / 10000000000000 == 34 
        || originalCardNumber / 10000000000000 == 37))) {
            printf("AMEX\n");
        }
        else if ((position == 16 && (originalCardNumber / 100000000000000 >= 51 
        && originalCardNumber / 100000000000000 <= 55))) {
            printf("MASTERCARD\n");
        }
        else if (((position == 13) && (originalCardNumber / 1000000000000 == 4)) 
        || ((position == 16) && (originalCardNumber / 1000000000000000 == 4))) {
            printf("VISA\n");
        } else {
            printf("INVALID - not in a range\n");
        }
    }
    else
    {
        printf("INVALID - total sum wrong\n");
    }


    return 0;
}


// Language:C 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 
