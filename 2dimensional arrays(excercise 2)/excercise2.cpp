//
//  main.cpp
//  2dimensional arrays(excercise 2)
//
//  Created by MARTIN on 28/10/2021.
//

#include <iostream>
using namespace std;

//constant size for the array
const int SIZE=4;

//function to compute the sum of the diagonal in the array
double sumMajorDiagonal(const double m[][SIZE])
{
    //variable sum
    double Sum=0;
    
    //for loop to calculate the  sum
    for(int i=0;i<4;i++)
    {
        Sum+=m[i][i];
    }
    
    return Sum;//return the sum of diagonal

} //end of function


//main program
int main()
{
    //declaration of array
    double Array[SIZE][SIZE];
     
    //prompt user to enter the values here
    cout<<"Enter values here:"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>Array[i][j];
        }
    }
    
    //outputs the sum of diagonal to the screen of the user
    cout<<"Sum of diagonal is"<<sumMajorDiagonal(Array);
    
    return 0;
    
}//end of program
