#include<stdio.h>
#include<math.h>

int main(){
    int choice;
    double area;  //double is a datatype used to represent double-precision floating-point numbers(3.14159265359)

    printf("Choose a shape: \n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        {
            double radius;
            printf("Enter the radius of circle: ");
            scanf("%lf", &radius);  // %lf formate specifier is used to read or print values of type 'double'
            area = 3.14*radius*radius;
            printf("Area of circle: %lf\n", area);  
        }
        break;

        case 2:
        {
            double length, width;
            printf("Enter the length and width of rectangle: ");
            scanf("%lf%lf", &length, &width); 
            area = length*width;
            printf("Area of rectangle: %lf\n", area);  
        }
        break;

        case 3:
        {
            double base, height;
            printf("Enter the base and height of triangle: ");
            scanf("%lf%lf", &base, &height); 
            area = 0.5*base*height;
            printf("Area of triangle: %lf\n", area);  
        }
        break;

        default:
        printf("Invalid Input.\n");
        break;
    }
    return 0;
}