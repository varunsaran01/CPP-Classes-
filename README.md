
# Shape Calculations using C++ Classes

This repository contains a C++ program that demonstrates the use of classes to perform calculations for different shapes, including squares, rectangles, circles, and equilateral triangles. This README provides explanations, code examples, and a brief algorithm to help you understand the concepts.

## Table of Contents
- [Introduction](#introduction)
- [Theory on Classes](#theory-on-classes)
- [Class Definition](#class-definition)
- [Shape Calculations](#shape-calculations)
- [Algorithm](#algorithm)
- [Output](#output)


## Introduction

In this C++ program, we use classes to encapsulate the properties and behaviors of different shapes. The program calculates and displays the area and perimeter (or circumference) of square, rectangle, circle, and equilateral triangle shapes.

## Theory on Classes

### What is a Class?

In C++, a class is a user-defined data type that serves as a blueprint for creating objects. It defines a set of attributes (data members) and methods (member functions) that the objects of the class will have.

### Encapsulation

One of the fundamental principles of object-oriented programming (OOP) is encapsulation. Encapsulation refers to the bundling of data (attributes) and methods (functions) that operate on that data into a single unit called a class. This concept helps in hiding the internal details of a class from the outside world and provides data security.

### Class Members

- **Data Members**: These are the attributes or variables that store data related to the class. In the `Shapes` class, data members could include the side length, radius, length, breadth, or height of various shapes.

- **Member Functions**: These are the methods or functions that perform operations on the data members of the class. Member functions define the behavior of the class. For example, the `square()` member function calculates the area and perimeter of a square.

### Object

An object is an instance of a class. It is a real-world entity that can be created based on the class's blueprint. In the code, the line `Shapes shape;` creates an object of the `Shapes` class named `shape`.

### Access Specifiers

In C++, class members can have different access specifiers:
- `public`: Members declared as public are accessible from outside the class.
- `private`: Members declared as private are not accessible from outside the class and are intended for internal use only.
- `protected`: Members declared as protected have limited access, similar to private, but with some differences in inheritance.

## Class Definition

The `Shapes` class encapsulates the properties and methods for different shapes. Each shape is represented by a member function:

- `square()`: Calculates and displays the area and perimeter of a square.
- `rectangle()`: Calculates and displays the area and perimeter of a rectangle.
- `circle()`: Calculates and displays the area and circumference of a circle.
- `triangle()`: Calculates and displays the area and perimeter of an equilateral triangle.

```cpp
class Shapes
{
public:
    // Member functions for different shapes
    void square();
    void rectangle();
    void circle();
    void triangle();
};
```

## Shape Calculations

Each member function of the `Shapes` class calculates the area and perimeter (or circumference) of a specific shape based on user input. For example:

```cpp
void Shapes::square()
{
    // Calculate area and perimeter of a square
    // ...
}
```

## Algorithm

The algorithm for performing shape calculations is as follows:

1. Create an instance of the `Shapes` class.
2. Display a menu to the user to select a shape (square, rectangle, circle, or triangle).
3. Based on the user's choice, call the corresponding member function to perform calculations.
4. Display the calculated area and perimeter (or circumference) of the selected shape.

## Output

![image](https://github.com/Pranav18062004/CPP-Classes/assets/79793482/a5d48acb-b70f-4420-b2d6-ed11a24de98f)
