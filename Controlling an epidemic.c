#include <stdio.h>
int main () {
    int days = 1;
    int pplTotal = 1;
    int population = 0;
    scanf("%d", &population);
    while (pplTotal < population){
        days++;
        pplTotal = pplTotal + (pplTotal*2);
    }
    printf("%d", days);
    return 0;
}

/*
In order to be able to better fight various epidemics in a region, the department of medicine of a major university has launched a large study. Researchers are interested in how fast an epidemic spreads, and therefore the speed at which health measures must be put in place. Your program should first read an integer representing the total population of the area. Knowing that a person was infected on day 1 and that each infected person contaminates two new people every day, you must calculate the day at which the entire population of the area will be infected.

Examples
Input:
3
Output:
2

Input:
10
Output:
4

Input:
100
Output:
6

Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
*/
