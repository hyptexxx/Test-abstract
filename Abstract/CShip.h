#pragma once
#include "CVehicle.h"
class CShip : public CVehicle
{
public:
	CShip();
	~CShip();
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

	void setPort(int port_p);
	void setCountPeople(int coutPeople);

	int getPort();
	int getCountPeople();

private:
	int X; int Y; int price; int speed; int year; int coutPeople; int port_p;
};

CShip::CShip()
{
}

CShip::~CShip()
{
}


int CShip::getCoordX() { return this->X; }
int CShip::getCoordY() { return this->Y; }
int CShip::getPrise() { return this->price; }
int CShip::getSpeed() { return this->speed; }
int CShip::getYear() { return this->year; }
void CShip::setCoordX(int X) { this->X = X; }
void CShip::setCoordY(int Y) { this->Y = Y; }
void CShip::setPrise(int price) { this->price = price; }
void CShip::setSpeed(int Speed) { this->speed = Speed; }
void CShip::setYear(int Year) { this->year = Year; }

inline void CShip::setPort(int port_p) { this->port_p = port_p; }
inline void CShip::setCountPeople(int coutPeople) { this->coutPeople = coutPeople; }

inline int CShip::getPort() { return this->port_p; }
inline int CShip::getCountPeople() { return this->coutPeople; }

