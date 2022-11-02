#include "SensorOutput.h"
#include "Sensor.h"

namespace greensbrain {
    namespace sensor {
        class SoilMoistureSensor: public Sensor {
            private:
                long measurement;
            public:
                void send();
                void receive();
        };
    }
}
