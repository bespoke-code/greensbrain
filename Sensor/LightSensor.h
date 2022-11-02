#include <string>

#include "SensorOutput.h"

namespace greensbrain {
    namespace sensor {
        class LightSensor {
            private:
                long measurement;
                std::string units;
            public:
                void send();
                void receive();
        };
    }
}
