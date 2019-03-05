//
//  Controller.cpp
//  Vector
//
//  Created by Christiansen, Aaron on 3/5/19.
//  Copyright © 2019 Ctec. All rights reserved.
//
#include "Controller.hpp"

Controller :: Controller()
{
    
}

void Controller :: start()
{
    cout << "This is inside the start method" << endl;
    cout << "seperate chunks with the << just like a + and Strings in Java" << endl;
    for( i = 0; i < 4; i++)
    {
        cout << minion[i] << endl;
        
    }
    
    for( i = 0; i < 4; i++)
    {
        cout << dru[i] << endl;
    }
    
}
