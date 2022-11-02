#include "SensorOutput.h"

namespace greensbrain {
    namespace sensor {
        class Sensor {
            private:
                long _id;
            public:
                virtual void send() = 0;
                virtual void receive() = 0;
        };
    }

}
