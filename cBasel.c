#include <stdio.h>
#include <math.h>

double getBasilea(double iterations) {
    double total = 0;
    for (double i=1; i<= iterations; i++){
        total += (1 / pow(i, 2));
    }
    return sqrt(6 * total);
}

int main() {

    for (double j=1; j<=10; j++) {
        double iterations = pow(10, j);
        double result = getBasilea(iterations);
        printf("%.0lf.\t %.16lf %.0lf\n", j, result, iterations);
    }

    return 0;
}
