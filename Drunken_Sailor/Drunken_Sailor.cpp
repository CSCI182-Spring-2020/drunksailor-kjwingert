// Drunken_Sailor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define Array_Width 20
#define Array_Height 20
#define Max_Steps 1000


enum DIRECTION {North, East, South, West};
int mapArray[Array_Width][Array_Height];

int main()
 {
     int x = Array_Width / 2;
     int y = Array_Height / 2;
     srand(time(NULL));
     int stepCount = 0;
    
     while (stepCount < Max_Steps)
     {
         DIRECTION nextStep = static_cast <DIRECTION> (rand() % 4);

         switch (nextStep)
         {
         case North:
             if (y > 0)
                 y--;
             break;
         case East:
             if (x < Array_Width - 1)
                 x++;
             break;
         case South:
             if (y < Array_Height - 1)
                 y++;
             break;
         case West:
             if (x > 0)
                 x--;
             break;
         }
         stepCount++;
         mapArray[x][y] = mapArray[x][y]++;
     }

         for (int i = 0; i < sizeof(Array_Width); i++)
         {
             for (int a = 0; a < Array_Height; a++)
             {
                 std::cout << mapArray[i][a] << " ";
             }
             std::cout << endl;
         }
 }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
