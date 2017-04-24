#Intent
Provide an interface for creating families of related or dependent objects without specifying their concrete classes.

#Structure
There is a class hierarchy of factories. Each factory creates concrete products. In the exampe, Abstact class _Vendor_ has two concrete classes _Apple_ and _Microsoft_.

There is also a class hierarchy of a type of products. Abstract class _Phone_ and _Laptop_, each has two subclasses _iPhone_ and _WindowsPhone_, _Mac_ and _Windows_ respectively.

Only the concrete factory classes have the information of the products. The client takes a parameter of a vendor (concrete factory class) that creating the products.

The key aspect is the parameterizing is achived by **object composition**. The products are built through other objects (_Apple_, _Windows_).

