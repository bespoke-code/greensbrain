#include "SensorOutput.h"

namespace greensbrain {
    namespace sensor {
        class TemperatureSensor {
            private:
                long measurement;
            public:
                void send();
                void receive();
        };
    }
}
