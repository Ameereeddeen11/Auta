//
// Created by Amir on 10.12.2025.
//

#ifndef AUTA_AUTO_H
#define AUTA_AUTO_H

#include <string>
using namespace std;

class Auto
{
public:
    Auto(
        const string& name,
        string& color,
        int year,
        int speed
    );

    virtual ~Auto();

    const string& getName() const;
    const int getYear() const;
    virtual void getSpeed() const;

protected:
    string mName;
    string mColor;
    int mYear;
    int mSpeed;
};

#endif //AUTA_AUTO_H