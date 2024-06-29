#include<iostream>
using namespace std;

/*Function overloading is a process to make more than one function
 with the same name but different parameters, numbers, or sequence.*/

//Vol of cylinder
float vol(double r, float h){
    return (3.14 * r* r *h);
}
//Vol of cube
float vol(float a){
    return (a*a*a);
}
//Vol of cubeoid
float vol(float l, float b, float h){
    return (l*b*h);
}


int main(){
    cout <<"Volume of cylinder is : "<<vol(3,4)<<endl;
    cout <<"Volume of cube is : "<<vol(4.6)<<endl;
    cout <<"Volume of cuboid is : "<<vol(6,5.6,4)<<endl;
    return 0;
}