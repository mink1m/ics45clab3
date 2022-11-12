#include "Movie.h"

using namespace std;

// movie constructor w/ params
Movie::Movie(int duration, int year, int numActors, double price, std::string title) {
    movieTime = duration;
    movieYearOut = year;
    moviePrice = price;
    movieTitle = title;
    numberOfActors = numActors;
    this->actorArrayIndex = 0;
    this->actors = new Actor[numberOfActors];
}

// default movie constructor
Movie::Movie() {
    movieTime = 0;
    movieYearOut = 0;
    moviePrice = 0;
    movieTitle = "";
    numberOfActors = 0;
    this->actors = new Actor[0];
    this->actorArrayIndex = 0;
}

Movie::Movie(const Movie &m) {
    movieTime = m.movieTime;
    movieYearOut = m.movieYearOut;
    moviePrice = m.moviePrice;
    movieTitle = m.movieTitle;
    numberOfActors = m.numberOfActors;
    this->actorArrayIndex = m.actorArrayIndex;
    this->actors = new Actor[numberOfActors];
    for (int i = 0; i < numberOfActors; i++)
    {
        actors[i] = m.actors[i];
    }
}

Movie::~Movie() {
    delete[] actors;
}


void Movie::setMovieTime(int duration) {
    this->movieTime = duration;
}

int Movie::getMovieTime() {
    return movieTime;
}

void Movie::setMovieYearOut(int year) {
    this->movieYearOut = year;
}

int Movie::getMovieYearOut() {
    return movieYearOut;
}

void Movie::setNumberOfActors(int numActors) {
    Actor* temp = new Actor[numActors];
    for (int i = 0; i < numberOfActors; i++)
    {
        temp[i] = actors[i];
    }
    delete[] actors;
    this->actors = temp;
    this->numberOfActors = numActors;
}

int Movie::getNumberOfActors() {
    return numberOfActors;
}

void Movie::setMoviePrice(double price) {
    this->moviePrice = price;
}

double Movie::getMoviePrice() {
    return moviePrice;
}

void Movie::setMovieTitle(std::string title) {
    this->movieTitle = title;
}

std::string Movie::getMovieTitle() {
    return movieTitle;
}

void Movie::addActor(std::string first_name, std::string last_name, int birth_year) {
    Actor currentActor(first_name, last_name, birth_year);
    this->actors[actorArrayIndex] = currentActor;
    this->actorArrayIndex++;
}

void Movie::printMovieInfo() {
    std::cout << "Title: " << getMovieTitle() << ", Published in: " << getMovieYearOut() << std::endl
    << "Duration of Movie: " << getMovieTime() << " minutes" << std::endl << "Price: $" << getMoviePrice()
    << std::endl << "Actors:" << std::endl;

    for (int i = 0; i < getNumberOfActors(); i++)
    {
        std::cout << actors[i].getFirstName() << ' ' << actors[i].getLastName() << ", " << actors[i].getBirthYear()
        << std::endl;
    }
}