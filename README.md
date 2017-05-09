# Creational Patterns
Creational design patterns abstract the instantiation process. They help make a system independent of how its objects are created, composed, and represented by paramterizing.

There are two ways to parameterize a system by
* the classes of objects it creates such as Factory Method; or
* relying more on object composition, which corresponds to using Abstract Factory, Builder, Prototype.

**Factory Method**: Creating a new subclass just to change the class of the product. How many different products are needed, how many subclasses have to be created.

**Abstact Factory**: The instance of the concrete factory class is passed to the client to create a specific product.

**Builder**: The instance of the concrete builder class is created by the client, then the client passes it to the director (a factory) to handle the rest. The client may get the product directly from the builder.

**Prototype**: The instances of the prototypes are passed to the client as parameters of the constructor. The client can clone each prototype and construct the products.

**Singleton**: This pattern ensures a class only has one instance, and provides a glocal point of access to it. In C++, this is achived by making the default constructor `proteced` or `private`. Lazy initialization maybe be used in the accessor `instance()`.

# Structural Patterns
Structural patterns rely on the same small set of language mechanisms for structruing code and objects: single and multiple inheritance for class-based patterns (Adapter, Facade, Proxy), and object composition for object patterns (Bridge, Composite, Decorator, Flyweight). But the similiarities belie the different intents among the patterns.

**Adapter**: Focuses on resolving the incompatibilities between two existing interfaces without reimplementing one or the other.

**Bridge**: Bridge bridges an abstraction and its (potentially numerous) implementations. It avoids the massive subclasses as the system evolves.

**Composite**: Relies on recursive composition to organize an open-ended number of objects. It focuses on structuring classes so that many related objects can be treated uniformly. Its focus is on representation not embellishment like Decorator.

**Decorator**: Also relies on recursive composition. It allows to add responsiblities to objects without subclassing.

**Facade**: Functions similarly as a wrapper as Adapter, a facade defines a new interface rather than reusing an old interface like in Adapter.

**Flyweight**: Flyweight focuses on reuse of the objects can be shared, and means to save memory spaces.

**Proxy**: Like Decorator, it composes an object and provides an identical interface to clients. But it is not concerned with attaching or detaching properties dynamically, and not designed for recursive composition.

# Credits
[Design Patterns: Elements of Reusable Object-Oriented Software](http://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
