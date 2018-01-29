//
//  Controller.hpp
//  MiniProject
//
//  Created by Miller, Wyatt on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>

class Controller
{
private:
    //Just like Java
    //Data members and internal methods
protected:
    //used when being inherited
public:
    Controller();
    void start();
    int addition(int a, int b);
    void printLines();
    void makeArrays();
    void makeVectors();
};

#endif /* Controller_hpp */
