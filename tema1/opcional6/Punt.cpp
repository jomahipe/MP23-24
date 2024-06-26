#pragma once
#include "Punt.h"
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;



float Punt::distancia(const Punt &p) const
{
	float dx = m_x - p.m_x;
	float dy = m_y - p.m_y;
	return sqrt(dx*dx + dy * dy);
}

istream& operator>>(istream& input, Punt& pt)
{
    float x, y;
    input >> x >> y;
    pt.setX(x);
    pt.setY(y);
    return input;
}
ostream& operator<<(ostream& output, const Punt& pt)
{
    output << "(" << pt.getX() << "," << pt.getY() << ")" << endl;
    return output;
}
ifstream& operator>>(ifstream& input, Punt& pt)
{
    float x,y;
    input >> x >> y;
    pt.setX(x);
    pt.setY(y);
    return input;
}
ofstream& operator<<(ofstream& output, const Punt& pt)
{
    output << "(" << pt.getX() << "," << pt.getY() << ")" << endl;
    return output;
}
