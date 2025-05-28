#include <stdio.h>
#include <math.h>


// This is where you add the function calculate_hypotenuse

float calculate_hypotenuse(float leg1, float leg2){
    
    // Raise each leg to second power 
    leg1 = pow(leg1, 2);
    leg2 = pow(leg2, 2);

    // Pythagorean theorem
    float hypotenuse = sqrt(leg1 + leg2);

    return hypotenuse;
}

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}