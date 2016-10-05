/*
 * truck.h -- header file for the Truck class
 * Created by: Adam Plumer
 * Date created: Mar 13, 2016
 */

#ifndef TRUCK_H
#define TRUCK_H

#include "package.h"
#include <queue>

class Truck
{
public:
        Truck();
        Truck(int posx, int posy);
        ~Truck();
        bool addPackage(Package p);
        int numPackages();
        bool isFull();
        void printRoute();

private:
        int w_posx;
        int w_posy;
        Package *vector;
        double distance(int posx1, int posy1, int posx2, int posy2);
        static const int MAX_SIZE = 50000;
        int current_size;
        std::vector<Package> packages;
};

#endif
