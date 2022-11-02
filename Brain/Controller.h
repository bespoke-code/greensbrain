#include <string>
#include <queue>

namespace greensbrain {
    namespace brain {
        class Controller {
            public:
                virtual void receive_state()=0;
                virtual void actuate()=0;
        };
    }
}