/*
DE: In der Cafeteria häufen sich die Beschwerden, dass der Getränkeautomat zwar den richtigen Betrag Wechselgeld zurückgebe, dieser aber aus übermäßig vielen kleinen Münzen bestehe. Der Hersteller erlaubt die Programmierung der Geldrückgabe des Automaten in C. Die Schnittstelle zum Automaten ist in dem Interface ChangeCalculator beschrieben. Die darin enthaltene Methode getChange gibt zu einem vorgegebenen Geldrückgabebetrag die Aufteilung in Münzen als int-Array zurück, das die Anzahl der einzelnen Münztypen wie folgt enthält:

An der Position 0: Anzahl der 1-Cent Münzen
An der Position 1: Anzahl der 2-Cent Münzen
An der Position 2: Anzahl der 5-Cent Münzen
An der Position 3: Anzahl der 10-Cent Münzen
An der Position 4: Anzahl der 20-Cent Münzen
An der Position 5: Anzahl der 50-Cent Münzen
An der Position 6: Anzahl der 1-Euro Münzen
An der Position 7: Anzahl der 2-Euro Münzen 

ENG: In the cafeteria, complaints are increasing that while the beverage vending machine returns the correct amount of change, it consists of an excessive number of small coins. The manufacturer allows the programming of the money return function of the machine in C. The interface to the machine is described in the ChangeCalculator interface. The method getChange contained therein returns, for a given amount of change, the breakdown into coins as an int array, which includes the quantity of each coin type as follows:
At position 0: Number of 1-cent coins
etc.*/

#include <stdio.h>
#define num_coins 8
int main () {
    int change, temp[num_coins];
    int coin[num_coins] = {1, 2, 5, 10, 20, 50, 100, 200}; //8 Stk
    
    printf("How much change (in cents) should the machine give to a customer?\n");
    scanf("%d", &change);
    
    for (int i=num_coins-1; i>=0; i--) {
        temp[i] = change/coin[i];
        printf("At position %d: %d\n", (i), temp[i]);
        change = change%coin[i];
    }
    return 0;
}
