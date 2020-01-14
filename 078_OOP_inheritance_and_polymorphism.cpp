/*
Inheritance and Polymorphism
- simple, not going into deeper details

Inheritance:
- parent and child relationship
- inherit the members
- subclass is inhereted from parent class
- do not have to duplicate content
- E.g
  - User > subclasses (teacher, student) get all the stuff from the user
    - teacher
    - student
  - Animal >
    - dog
    - cat
  - Media file
    - video file
    - audio file

class Teacher public User
{

}

- if it's empty > you already have the members from user (e.g. first_name)
- you can change the access modifier if you want (public, private...)

Multiple inheritance (in C++ but not in C#):
- a class can be derived from multiple classes

Polymorphism:
- hand in hand in nature with inheritance (very similar)
- you can treat a teacher as a teacher but also as a user
- both teacher and user
- teacher is derived from user
- teacher both qualifies as a user and teacher...

Examples > check ./078_OOP_inheritance_and_polymorphism
- Teacher class
*/