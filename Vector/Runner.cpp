//
//  Runner.cpp
//  Vector
//
//  Created by Christiansen, Aaron on 3/5/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    // Controller app;
    //app.start();
    
    //pointer version
    Controller * app = new Controller();
    app -> start();
    return 0;
}
