//
// Created by Amir on 10.12.2025.
//

#include "Auto.h"
#include <iostream>
using namespace std;

Auto::Auto(const string& name, string& color, int year, int speed) : mName(name), mColor(color), mSpeed(speed), mYear(year)
{
    cout << "Auto se jmenuje " << mName;
}

Auto::~Auto() = default;

const string& Auto::getName() const
{
    return mName;
}

void Auto::getSpeed() const
{
    cout << "Rychlost je " << mSpeed;
}

const int Auto::getYear() const
{
    return mYear;
}

