#include "Car.h"

using namespace week02;

Car::Car(int numberOfPassengers,
		 int topSpeed,
		 double kilometersPerLitre,
		 int numberOfAirBags,
		 bool abs,
		 int numberOfWheels)
	: MotorVehicle(numberOfPassengers,
				   topSpeed,
				   numberOfWheels,
				   kilometersPerLitre),
	  m_numberOfAirBags(numberOfAirBags),
	  m_abs(abs)
{
}

Car::Car(int numberOfPassengers,
		 int topSpeed,
		 double kilometersPerLitre,
		 std::string color,
		 int numberOfAirBags,
		 bool abs,
		 int numberOfWheels)
	: MotorVehicle(numberOfPassengers,
				   topSpeed,
				   numberOfWheels,
				   color,
				   kilometersPerLitre),
	  m_numberOfAirBags(numberOfAirBags),
	  m_abs(abs)
{
}

int Car::getSafetyRating() {
	int safetyRating = 0;
	if (m_numberOfAirBags >= 4) {
		safetyRating += 3;
	} else if (m_numberOfAirBags >= 2) {
		safetyRating += 2;
	} else if (m_numberOfAirBags > 0) {
		safetyRating += 1;
	}

	if (m_abs) {
		safetyRating += 2;
	}
	return safetyRating;
}
