/*There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array points where points[i] = [xstart, xend] denotes a balloon whose horizontal diameter stretches between xstart and xend. You do not know the exact y-coordinates of the balloons.
Arrows can be shot up directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with xstart and xend is burst by an arrow shot at x if xstart <= x <= xend. There is no limit to the number of arrows that can be shot. A shot arrow keeps traveling up infinitely, bursting any balloons in its path.
Given the array points, return the minimum number of arrows that must be shot to burst all balloons.
 
Example 1:
Input: points = [[10,16],[2,8],[1,6],[7,12]]
Output: 2

Example 2:
Input: points = [[1,2],[3,4],[5,6],[7,8]]
Output: 4

Example 3:
Input: points = [[1,2],[2,3],[3,4],[4,5]]
Output: 2
*/

#include <stdio.h>

int main()
{
    int n, end, arrows = 1;
    printf("How much points do you want to check?\n");
    scanf("%d", &n);

    int points[n][2];

    for (int i=0; i<n; i++) {
        printf("\nEnter two values for the point with index %d:\n", i);
        scanf("%d %d", &points[i][0], &points[i][1]);
    }
    
    end = points[0][1];
    printf("%d", n);
    for (int i=1; i<n; i++) { //bc I dealt with 1st baloon
        
        if (points[i][0] > end) {
            arrows++;
        end = points[i][1];
        }
    }
    
    printf("\nYou'll need the minimum of %d arrows", arrows);

    return 0;
}
