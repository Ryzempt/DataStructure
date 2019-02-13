//
//  FileController.cpp
//  DataStructure
//
//  Created by Kaufman, Robert on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"







LinkedList<CrimeData> FileController :: readDataToList(String fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '/r');
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    Crime row(currentCSVLine);
                    crimeList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimes;
}
