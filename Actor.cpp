#include "Actor.h"

using namespace std;

Actor::Actor(std::string firstNameA, std::string lastNameA, int birthYearA) {
    setFirstName(firstNameA);
    setLastName(lastNameA);
    setBirthYear(birthYearA);
}

Actor::Actor() {
    setFirstName("");
    setLastName("");
    setBirthYear(0);
}

void Actor::setFirstName(std::string firstNameA) {
    this->firstName = firstNameA;
}

std::string Actor::getFirstName() {
    return firstName;
}

void Actor::setLastName(std::string lastNameA) {
    this->lastName = lastNameA;
}

std::string Actor::getLastName() {
    return lastName;
}

void Actor::setBirthYear(int birthYearA) {
    this->birthYear = birthYearA;
}

int Actor::getBirthYear() {
    return birthYear;
}