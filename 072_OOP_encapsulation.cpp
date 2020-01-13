/*
Encapsulation
- you do not have to expose all the information inside your class
- private and public members
- car example in the video
- driver does not have to understand the inner mechanics of the car (private) like ethe engine...
  - has to understand how to use (drive) the car
  - has to care about only the exposed (public) stuff like pedals, wheel, etc...
  - pedals... > interface
  - you can change the engine > driver can use the car the same way
- abstraction > you do not have to understand the inner things to use the class
- control > what people can see/do with our class
- good > we can ensure that people use our class in a proper way

Achiving encapsulation in 2 ways:
1. access modifiers
  - public, private, protected
2. getters/setters
  - methods that help us fine-tune >
  - how our private data members can be accesses
  - defining for users
    - getter() > how to get that value (e.g > status in earlier example)
    - setter() > how to setthat value (e.g > status in earlier example)
  - use when really strict control is necessary over the class
  - other cases do not pollute your class with them
  - KISS > Keep It Super Simple
*/