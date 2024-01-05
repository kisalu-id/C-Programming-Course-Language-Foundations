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

ENG: In der Cafeteria häufen sich die Beschwerden, dass der Getränkeautomat zwar den richtigen Betrag Wechselgeld zurückgebe, dieser aber aus übermäßig vielen kleinen Münzen bestehe. Der Hersteller erlaubt die Programmierung der Geldrückgabe des Automaten in C. Die Schnittstelle zum Automaten ist in dem Interface ChangeCalculator beschrieben. Die darin enthaltene Methode getChange gibt zu einem vorgegebenen Geldrückgabebetrag die Aufteilung in Münzen als int-Array zurück, das die Anzahl der einzelnen Münztypen wie folgt enthält:

An der Position 0: Anzahl der 1-Cent Münzen
etc.*/

#include <stdio.h>
int main () {
    int change, temp;
    int coin[9] = {1, 2, 5, 10, 20, 50, 100, 200}; //8 Stk
    
    printf("How much change (in cents) should the machine give to a customer?\n");
    scanf("%d", &change);
    
    for (int i=8; i>=0; i--) {
        temp = change/coin[i-1];
        printf("An der Position %d: %d\n", (i-1), temp);
        change = change%coin[i-1];
    }
    return 0;
}
