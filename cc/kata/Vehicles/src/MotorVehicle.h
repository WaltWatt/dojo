#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H

#include "Vehicle.h"

namespace week02 {
class MotorVehicle : public Vehicle
{
public:
	MotorVehicle(int numberOfPassengers,
				 int topSpeed,
				 int numberOfWheels,
				 double kilometersPerLitre)
		: Vehicle(numberOfPassengers, topSpeed, numberOfWheels),
		  m_kmpl(kilometersPerLitre)
	{
	}

	MotorVehicle(int numberOfPassengers,
				 int topSpeed,
				 int numberOfWheels,
				 std::string color,
				 double kilometersPerLitre)
		: Vehicle(numberOfPassengers, topSpeed, numberOfWheels, color),
		  m_kmpl(kilometersPerLitre)
	{
	}

	virtual ~MotorVehicle() {}

	virtual double getKilometresPerLitre() const
	{
		return m_kmpl;
	}

protected:
	double m_kmpl;
};
}

#endif // MOTORVEHICLE_H
