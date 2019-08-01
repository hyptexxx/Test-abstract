#pragma once
class CVehicle
{
protected:
	int X; int Y; int price; int speed; int year; int up; int coutPeople;
	virtual int getCoordX() = 0;
	virtual int getCoordY() = 0;
	virtual int getPrise() = 0;
	virtual int getSpeed() = 0;
	virtual int getYear() = 0;

	virtual void setCoordX(int X) = 0;
	virtual void setCoordY(int Y) = 0;
	virtual void setPrise(int price) = 0;
	virtual void setSpeed(int Speed) = 0;
	virtual void setYear(int Year) = 0;
private:

};
 