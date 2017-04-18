# Intent
The Builder pattern separates how a complex product(iPhone) is built and assembled.
So the same construction process can create different representations(Mac).

In the example, Apple is the Director, and we have an iPhoneBuilder to build iPhoneScreen, iPhoneBattery, iPhoneCPU.
Anther concrete Builder called MacBuilder builds and assembles all parts specificly for a Mac.

