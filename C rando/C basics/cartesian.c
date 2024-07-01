#include <stdio.h>
#include <math.h>

// Function to calculate Cartesian distance between two points
float cartesian_distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;

    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &x2, &y2);

    float distance = cartesian_distance(x1, y1, x2, y2);

    printf("Distance between the points: %.2f\n", distance);

    return 0;
}
