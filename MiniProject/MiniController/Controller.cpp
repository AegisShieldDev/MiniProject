//
//  Controller.cpp
//  MiniProject
//
//  Created by Miller, Wyatt on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

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
    
    printLines();
}

int Controller :: addition (int a, int b)
{
    int r;
    r = a + b;
    return r;
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
