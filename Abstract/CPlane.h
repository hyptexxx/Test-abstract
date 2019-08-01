#pragma once
#include "CVehicle.h"
class CPlane : public CVehicle
{
public:
	CPlane();
	~CPlane();
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

	void setUp(int up);
	void setCountPeople(int coutPeople);

	int getUp();
	int getCountPeople();

private:
	
};

CPlane::CPlane()
{
}

CPlane::~CPlane()
{
}

int CPlane::getCoordX() { return this->X; }
int CPlane::getCoordY() { return this->Y; }
int CPlane::getPrise() { return this->price; }
int CPlane::getSpeed() { return this->speed; }
int CPlane::getYear() { return this->year; }
void CPlane::setCoordX(int X) { this->X = X; }
void CPlane::setCoordY(int Y) { this->Y = Y; }
void CPlane::setPrise(int price) { this->price = price; }
void CPlane::setSpeed(int Speed) { this->speed = Speed; }
void CPlane::setYear(int Year) { this->year = Year; }

inline void CPlane::setUp(int up) { this->up = up; }
inline void CPlane::setCountPeople(int coutPeople) { this->coutPeople = coutPeople; }
inline int CPlane::getUp() { return this->up; }
inline int CPlane::getCountPeople() { return this->coutPeople; }

