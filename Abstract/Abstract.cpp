#include "pch.h"
#include <iostream>
#include "CCar.h"
#include "CPlane.h"
#include "CShip.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	CCar car;
	CPlane plane;
	CShip ship;
	car.setCoordX(1);
	plane.setCoordX(2);
	ship.setCoordX(3);
    cout << car.getCoordX(); 
	cout << plane.getCoordX();
	cout << ship.getCoordX();
	system("pause");
}

