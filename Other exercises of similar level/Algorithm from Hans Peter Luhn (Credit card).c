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
            sumOdd += digit;
        }
        
        cardNumber /= 10; //next digit
        position++;
    }

    int totalSum = sumEven + sumOdd;

    if (totalSum % 10 == 0)
    {
        // Check card type based on length and starting digits
        if ((position == 16 && (cardNumber == 51 || cardNumber == 52 || cardNumber == 53 || cardNumber == 54 || cardNumber == 55))
        || (position == 15 && (cardNumber / 10 == 34 || cardNumber / 10 == 37))
        || ((position == 13 || position == 16) && (cardNumber / 100 == 4)))
        {
        printf("AMEX\n");
        }
        else if (position == 16 && cardNumber / 100 >= 51 && cardNumber / 100 <= 55) {
            printf("MASTERCARD\n");
        }
        else if ((position == 13 || position == 16) &&  cardNumber / 1000 == 4)  {
            printf("VISA\n");
        } else {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }


    return 0;
}


// Language:C 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 
