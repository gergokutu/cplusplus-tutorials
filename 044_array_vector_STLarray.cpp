// Array Vs Vector Vs STL Array (collections)
// When to use which

// Big difference >>
// whether you can assign them to another variable of the same type??
// Vectors
// works >> copies the stuff vector to things
// std::vector<int> stuff;
// std::vector<int> things = stuff;
// you can do it with templetized arrays (STL arrays)
// but cannot do that with arrays (standard C style arrays)
// with arrays >>
// you have to itarate through the collection
// and assign 1 item at a time to the new array

// usually use vectors because of simplicity...

// C style arrays passed by pointer
// it means that
// when passed to a function it decays to a pointer
// and basically forgets how large 
// is the size of memory reserved for that array
// so you usually have to pass an additional size
// you can modify the array by default inside the function
// in case of passing by value (STL array, vector) >>
// you have to pass by reference (e.g &data in prev example file)
// to do so

// Both STL arrays and vectors has a size() method
// C style arrays >> you need additional argument for that
// to calculate the size with C style >> use the sizeof operator
// only work in that scope where the array is defined
// check earlier example...

// STL array and C style array are statically sized
// STL Vectors are dinamically sized
// STL Vectors = Vectors (synonims)

