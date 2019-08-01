#pragma once
#include "CVehicle.h"
class CCar : public CVehicle
{
public:
	CCar();
	~CCar();
	// Унаследовано через CVehicle
	virtual int getCoordX() override;
	virtual int getCoordY() override;
	virtual int getPrise() override;
	virtual int getSpeed() override;
	virtual int getYear() override;
	// Унаследовано через CVehicle
	virtual void setCoordX(int X) override;
	virtual void setCoordY(int Y) override;
	virtual void setPrise(int price) override;
	virtual void setSpeed(int Speed) override;
	virtual void setYear(int Year) override;

private:
	int X; int Y; int price; int speed; int year;

};

CCar::CCar()
{
}

CCar::~CCar()
{
}


int CCar::getCoordX() { return this->X; }
int CCar::getCoordY() { return this->Y; }
int CCar::getPrise() { return this->price; }
int CCar::getSpeed() { return this->speed; }
int CCar::getYear() { return this->year; }
void CCar::setCoordX(int X) { this->X = X; }
void CCar::setCoordY(int Y) { this->Y = Y; }
void CCar::setPrise(int price) { this->price = price; }
void CCar::setSpeed(int Speed) { this->speed = Speed; }
void CCar::setYear(int Year) { this->year = Year; }

