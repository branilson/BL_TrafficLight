<a href="https://github.com/branilson"><img src="https://avatars1.githubusercontent.com/u/4284691?v=3&s=200" title="Branilson Luiz" alt="BranlsonLuiz"></a>

<!-- [![Branilson Luiz(https://avatars1.githubusercontent.com/u/4284691?v=3&s=200)](https://github.com/branilson) -->


# Simple Traffic Light Mbed code

> Simple finite state machine code sample for a traffic light system with pedestrian call buttom.

> Made for ST STM32F4 Discovery board using ARM Mbed library and PlatformIO IoT Ecosystem.

> Made for the discipline Microprocessed Systems II at SENAI CIMATEC university center.

> Keywords: Traffic light, C/C++, PlatformIO, Mbed, STM32F4

**Finite State Machine transition policy**

- Red -> Green: t=10s
- Green --> Yellow: t=20s | buttom = 1
- Yellow --> Red: t=4s
