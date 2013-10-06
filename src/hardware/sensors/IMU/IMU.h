#ifndef IMU_H
#define IMU_H

#include <common/events/Event.hpp>
#include <hardware/sensors/DataStructures/IMUData.hpp>

class IMU
{
    public:
        IMU() { }
        Event<IMUData>onNewData;


    private:

};



#endif //IMU_H
