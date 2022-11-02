#include <string>
#include <queue>

namespace greensbrain {
    namespace brain {
        template <class T>
        class Publisher {
            private:
                bool isStarted = false;
                std::string topic_name;
                std::queue<T> message_buffer;
                void enqueue(T message) { message_buffer.push(message); }
            public:
            void start();
            void stop();
            virtual T publish(T message);
        };
    }
}