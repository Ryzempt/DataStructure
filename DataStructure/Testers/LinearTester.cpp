//
//  LinearTester.cpp
//  DataStructure
//
//  Created by Kaufman, Robert on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer()
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
}
