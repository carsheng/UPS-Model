/*
 * warehouse.h -- header file for the Warehouse class
 * Created by: Adam Plumer
 * Date created: Mar 13, 2016
 */

#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <vector>
#include <queue>
#include "truck.h"
#include "package.h"

class Warehouse
{
public:
        Warehouse();
        ~Warehouse();
        bool readParams(std::string filename);
        void readPackages(std::string filename);
        void loadTrucks();
        void getRoutes();

private:
        Truck *trucks;
        Package *packages;
        Package *waitlist;
        static bool sizeComp(Package a, Package b);
        void sortPackages();
        void quickSort(int begin, int end);
        void swap(int i, int j);

        int num_trucks;
        int full_trucks;
        int ns_loc;
        int ew_loc;
};

#endif
