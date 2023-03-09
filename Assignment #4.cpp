//Author: Aldane Russell
//Purpose: Using a class, write a program that gets the radius of a circle and outputs the area and circumference of the circle. Your class will have one (1) attribute, radius, and three (3) methods, setRadius(), getArea(), and getCircumference().
#include <iostream>
//pi
#define PI 3.14159
using namespace std;
//Makes circle a class
class Circle {
//Declares public
public:
//Declares radius as float
float radius;
//set the radius
void setRadius(float r){
radius = r;
}
//Calculating Area of circle
float getArea(){
float area;
area = PI *(radius*radius);
return area;
}
//Calculating circumference of circle
float getCircumference(){
float circumference;
circumference = 2 * PI *radius;
return circumference;
}
};
//main
int main() {
float radius;
//Requests input of circle radius
cout<<"Please enter radius: ";
cin>>radius;

//creating object
Circle object;
object.setRadius(radius);
//Displays output of area of circle
cout<<"The area of Circle is : ";
cout<<object.getArea()<<"\n";

cout<<"The Circumference of the Circle is : ";
cout<<object.getCircumference()<<"\n";

return 0;
}


