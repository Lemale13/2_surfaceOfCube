/*Program: surfaceOfCube.cpp
Author: Gaston Honomou
Compute the surface area of a cube.

1. The inputs are
        length of edge
        
2. Computations:
        surface of face = length * length.
        surface area = surface of face * 6.
3. The outputs are
        surface area of a cube*/


// Include the header file
#include <iostream>
using namespace std;

// Initialize the entry point of the program
int main() {

  // Declare the diffents variable
  int lenEdge = 0;
  int surfFace = 0;
  int surfArea = 0;

  // Tell user to enter the length of an edge
  cout<<"Enter the length of an edge: ";

  // Get the number from user
  cin>>lenEdge;

  // Compute the surface area
  surfFace = lenEdge * lenEdge;
  surfArea = surfFace * 6;

  // Print the surface  area of the cube 
  cout<<"The surface area of cube is: "<<surfArea;

  return 0;
  

}