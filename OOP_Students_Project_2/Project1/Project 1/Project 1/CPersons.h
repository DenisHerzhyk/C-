#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std; 

class CPerson {
protected:
	string name, EGN;
    int points;
public:
	virtual void getData();
	virtual void display();
	int getPoint() { return points; };
	string getEGN() { return EGN; };
};



