//
//  Controller.cpp
//  MiniProject
//
//  Created by Miller, Wyatt on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for(int index = 0; index < 10; index++)
    {
        //cout << "This is the " << index + 1 <<  " time in the loop" << endl;
    }
    
    int z;
    z = addition (5,3);
    //cout << "The result is " << z;
    
    //printLines();
    //makeArrays();
    makeVectors();
}

int Controller :: addition (int a, int b)
{
    int r;
    r = a + b;
    return r;
}

void Controller :: makeVectors()
{
    std::vector<int> firstVector  {1, 2, 3, 4, 5 };
    std::vector<int> secondVector {6, 7, 8, 9, 10};
    
    for(int i = 0; i < 5; i++)
    {
        if(i < 4)
        {
            cout << firstVector[i] << ", ";
        }
        else if(i == 4)
        {
            cout << firstVector[i] << endl;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(i < 4)
        {
            cout << secondVector[i] << ", ";
        }
        else if(i == 4)
        {
            cout << secondVector[i] << endl;
        }
    }
    
}

void Controller :: makeArrays()
{
    int intArray [] = { 1,2,3,4,5 };
    string stringArray [] = { "A","B","C","D","E" };
    double doubleArray [] = { 1.5,2.4,3.3,4.2,5.1 };
    
    for(int i = 0; i < 5; i++)
    {
        if(i < 4)
        {
            cout << intArray[i] << ", ";
        }
        else if(i == 4)
        {
            cout << intArray[i] << endl;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(i < 4)
        {
            cout << stringArray[i] << ", ";
        }
        else if(i == 4)
        {
            cout << stringArray[i] << endl;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(i < 4)
        {
            cout << doubleArray[i] << ", ";
        }
        else if(i == 4)
        {
            cout << doubleArray[i] << endl;
        }
    }
}


void Controller :: printLines()
{
    string name = "Wyatt";
    
    cout << name << endl;
    
    for(int index = 13; index < 32; index++)
    {
        cout <<  index << " ";
        
        if(index == 31)
            cout << "" << endl;
    }
    
    cout <<  &name << endl;
    cout <<  "My Name is " << name << " and I'm learning C++" << endl;
}

