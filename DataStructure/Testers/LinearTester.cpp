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
    
    musicSTL.startTimer();
    vector<Music> tunez  = FileController :: musicDataToVector("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    
    musicSTL.stopTimer();
    
    musicOOP.startTimer()
    LinkedList<Music> musicList  = FileController :: musicDataToList("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    musicOOP.stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    
}

void LinearTester :: testVsStack()
{
    Timer crimeTimerStack, crimeTimerOOP, musicStack, musicOOP;
    
    crimeTimerStack.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    
    crimeTimerStack.stopTimer();
    
    crimeTimerOOP.startTimer()
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerStack.displayInformation();
    crimeTimerOOP.displayInformation();
    
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicStack.startTimer();
    vector<Music> tunez  = FileController :: musicDataToVector("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    
    musicStack.stopTimer();
    
    musicOOP.startTimer()
    LinkedList<Music> musicList  = FileController :: musicDataToList("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    musicOOP.stopTimer();
    
    musicStack.displayInformation();
    musicOOP.displayInformation();
    
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerStack.resetTimer();
    musicOOP.resetTimer();
    musicStack.resetTimer();
    
    
}

void LinearTester :: testVQueue()
{
    Timer crimeTimerQueue, crimeTimerOOP, musicQueue, musicOOP;
    
    crimeTimerQueue.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    
    crimeTimerQueue.stopTimer();
    
    crimeTimerOOP.startTimer()
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerQueue.displayInformation();
    crimeTimerOOP.displayInformation();
    
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerQueue.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicQueue.startTimer();
    vector<Music> tunez  = FileController :: musicDataToVector("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    
    musicQueue.stopTimer();
    
    musicOOP.startTimer()
    LinkedList<Music> musicList  = FileController :: musicDataToList("/Users/rkau8389/Documents/C++ Folder/DataStructure/DataStructure/Controller/Resources/crime.csv");
    musicOOP.stopTimer();
    
    musicQueue.displayInformation();
    musicOOP.displayInformation();
    
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicQueue.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerQueue.resetTimer();
    musicOOP.resetTimer();
    musicQueue.resetTimer();
    
    
}
