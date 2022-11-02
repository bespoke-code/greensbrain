#include <string>

namespace greensbrain {
    namespace sensor {
        class Output {
            private:
                std::string topic;
                long _id;
                void* data;
            public:
                std::string get_topic() { return topic; }
                void* get_content() { return data; }
                long get_id() { return _id; }
        };
    }

}