# Vector`<unsigned char dimension>`
## Meta
### Inheritance Tree
```
-Vector<unsigned char>
```
## Paths
Include: `nebula/src/vector.hpp`

Compile: `None`

## Template Limits
unsigned char `dimension` <= 255
## Constructors
### Native
#### Vector`<dimension>`::Vector(unsigned int components[`dimension`])
Creates a Vector using the provided component array of size `dimension`.

##### Time Complexity
O(n) for n = `dimension`
## Destructors
### Native
#### ~Vector`<dimension>`::Vector()
Destructs Vector.
## Attributes
### Native
#### unsigned int component[`dimension`]
Array of vector components.
