# Creational Patterns
Creational design patterns abstract the instantiation process. They help make a system independent of how its objects are created, composed, and represented by paramterizing.

There are two ways to parameterize a system by
* the classes of objects it creates such as Factory Method; or
* relying more on object composition, which corresponds to using Abstract Factory, Builder, Prototype.

## Factory Method
Creating a new subclass just to change the class of the product. How many different products are needed, how many subclasses have to be created.

## Abstact Factory
The instance of the concrete factory class is passed to the client to create a specific product.

## Builder
The instance of the concrete builder class is created by the client, then the client passes it to the director (a factory) to handle the rest.
The client may get the product directly from the builder.

## Prototype
The instances of the prototypes are passed to the client as parameters of the constructor. The client can clone each prototype and construct the products.

## Singleton
This pattern ensures a class only has one instance, and provides a glocal point of access to it. In C++, this is achived by making the default constructor `proteced` or `private`. Lazy initialization maybe be used in the accessor `instance()`.

