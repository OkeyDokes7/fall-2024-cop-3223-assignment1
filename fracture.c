//Name: Michael Bryant
//UCFID: 5673787

//Note: I did not address any rounding errors as it seems pointless when the main number we work with is pi 
//and there are seemingly infinite inputs the user may give. Also, because there was no set number of significant
//figures I did not want to lose points for accuracy.


#include<stdio.h> 
#include<math.h>
#define PI 3.14159;

//Recieve Input
double askForUserInput(){
    double in;
    scanf("%lf", &in);
    return in;
}

//Find diameter of the circle using the distance formula, following outputting the inputs.
double calculateDistance(){
    printf("Enter the coordinates in the following order: x1, y1, x2, then y2\n");
    double x1 = askForUserInput(), y1 = askForUserInput(), x2 = askForUserInput(), y2 = askForUserInput();
    printf("Point #1 entered: x1 = %lf; y1 = %lf\nPoint #2 entered: x2 = %lf; y2 = %lf\n", x1, y1, x2, y2);
    return sqrt(pow((x1 - x2), 2) + pow((y1-y2), 2));
}

//Calculate and display perimeter
double calculatePerimeter(){
    double perimeter = calculateDistance() * PI;
    printf("The perimeter of the city encompassed by your request is %lf.\n\n", perimeter);
    return 1.0;
}

//Calculate and display area
double calculateArea(){
    double area = pow(calculateDistance()/2.0, 2) * PI;
    printf("The area of the city encompassed by your request is %lf\n\n", area);
    return 1.0;
}

//Calculate and display width
double calculateWidth(){
    double width = calculateDistance();
    printf("The width of the city encompassed by your request is %lf\n\n", width);
    return 1.0;
}

//Calculate and display height
double calculateHeight(){
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is %lf\n\n", height);
    return 1.0;
}

//Main
int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}