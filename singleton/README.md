#Intent
Ensure a class only has one instance, and provide a global point of access to it.

#Implementation
The key idea is to avoid a class to be instantiated multiple time by _protect_ the default constructor.
Using _protect_ other than _private_ allows the subclass to access the constructor.

Clients access the singleton exclusively through the a _Instance_ member function.
_Instance_ uses lazy initilization, meaning the instance it returns isn't created and stored until it's first accessed.

We may also want a unique instance of each subclass of the Singleton. This can be done inside the implementation of the
parent class by 1) using environment variables, 2) using a registry of singleton (mapping a name to a singleton of a subclass).
Or, it can be done by moving the implementation of _Instance_ from parent class to a subclass, then we can decide the class 
of singleton at linktime (linking the object file containing the implementation).

# Credits
[Design Patterns: Elements of Reusable Object-Oriented Software](http://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
