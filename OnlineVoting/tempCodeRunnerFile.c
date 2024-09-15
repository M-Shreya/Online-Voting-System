#include <stdio.h>

// Function to compute the derivative y'
double derivative(double x, double y) {
    return (x + y) / 2.0;
}

// Milne's Simpson Predictor
double milne_simpson_predictor(double y0, double y1, double y2, double y3, double h) {
    return y0 + (4.0 * h / 3.0) * (2 * derivative(0.5, y1) - derivative(1.0, y2) + 2 * derivative(1.5, y3));
}

// Milne's Simpson Corrector
double milne_simpson_corrector(double y3, double ynp, double h) {
    return y3 + (h / 3.0) * (derivative(2.0, ynp) + 4 * derivative(1.5, y3) + derivative(1.0, ynp));
}

int main() {
    double y[4];
    double h;

    // Input values
    printf("Enter the values of y0, y1, y2, y3:\n");
    for (int i = 0; i < 4; i++) {
        printf("y%d: ", i);
        scanf("%lf", &y[i]);
    }

    // Input step size
    printf("Enter the step size (h): ");
    scanf("%lf", &h);
    
    // Predictor
    double ynp = milne_simpson_predictor(y[0], y[1], y[2], y[3], h);
    
    printf("Predicted y(2) = %.4lf\n", ynp);
    
    // Corrector
    double ync = milne_simpson_corrector(y[3], ynp, h);
    
    printf("Corrected y(2) = %.4lf\n", ync);
    
    return 0;
}
