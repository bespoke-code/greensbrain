# greensbrain
A prototype system design for monitoring and well-being of plants.

# Components

## Brain

"Brain" denotes a system which can send and receive data coming from sensors, as well as send control signals to actuators which influence the environment (lights, fans, irrigation control valves, etc.).

The "Brain" envisions a Pub-Sub system architecture for communication with sensors via registered topics, and Services-type architecture consisting of Controllers for one (or multiple) actuators, fed by the input of multiple sensors. 

Each controller implements its own model for the environment control, which can range from simple PID control, to complex, AI-based logic.

## Sensors

In order to create a functional closed feedback loop and control a plant's environment with great precision and measure _in-situ_ parameters, we use multiple sensors.

- Light lux-meter
- Light spectrum analyser
- Soil moisture level
- Soil temperature probe
- Air temperature probe
- Air humidity sensor
- Chlorophyl measurement sensor (eg. RGB-NIR camera)

## Actuators

Actuators are all components in a system which can influence the environment of a monitored plant. Actuators can influence:

- irrigation flow (water valves)
- temperature (fans, actuated windows, heater blocks)
- light (artificial light, photosensitive glass, curtains/blinds)
