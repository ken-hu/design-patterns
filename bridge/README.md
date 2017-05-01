# Intent
Decouple an abstraction and its implementation so that the two can vary independently.

# Structure
There are two independent hierarchies, one for abstraction, the other for the implementation.

In the example, there are two website modules that can be implemented in Dark or Light theme.

Without Bridge pattern, the abstraction is extended by subclassing to cover all different kinds like below.

![Bridge](./bridge0.png "Bridge")

With Bridge pattern, it's conveninent to extend different abstactions and implementations.

![Bridge](./bridge.png "Bridge")

The problem with the first approach is if we add another module called _Footer_, then we have to implement two subclasses, `DarkFooter` and `LightFooter`. But only one subclass of WebsiteModule is required with Bridge pattern.

