#include "Bus.h"

using namespace week02;

Bus::Bus(int numberOfPassengers,
		 int topSpeed,
		 double kilometresPerLitre,
		 bool seatBeltsInstalled,
		 bool standingPassengersAllowed,
		 int numberOfWheels)
	: MotorVehicle(numberOfPassengers,
				   topSpeed,
				   numberOfWheels,
				   kilometresPerLitre),
	  m_seatBeltsInstalled(seatBeltsInstalled),
	  m_standingPassengersAllowed(standingPassengersAllowed) {}

Bus::Bus(int numberOfPassengers,
		 int topSpeed,
		 double kilometresPerLitre,
		 std::string color,
		 bool seatBeltsInstalled,
		 bool standingPassengersAllowed,
		 int numberOfWheels)
	: MotorVehicle(numberOfPassengers,
				   topSpeed,
				   numberOfWheels,
				   color,
				   kilometresPerLitre),
	  m_seatBeltsInstalled(seatBeltsInstalled),
	  m_standingPassengersAllowed(standingPassengersAllowed) {}

Bus::~Bus() {}

int Bus::getSafetyRating()
{
	int safetyRating = 0;

	if (m_seatBeltsInstalled) {
		safetyRating += 3;
	}

	if (!m_standingPassengersAllowed) {
		safetyRating += 2;
	}
	return safetyRating;
}

