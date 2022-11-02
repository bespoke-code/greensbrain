#include <string>
#include <queue>

namespace greensbrain {
    namespace brain {
        template <class T>
        class Subscriber {
            private:
                bool isStarted = false;
                std::string topic_name;
                std::queue<T> message_buffer;
                void enqueue(T message) { message_buffer.push(message); }
            public:
            void start();
            void stop();
            virtual void receive(T message) { enqueue(T); };
        };
    }
}