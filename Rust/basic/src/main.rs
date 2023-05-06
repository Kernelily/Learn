fn main() {
    varmut(); datatypes(); func_params(5, '😂'); func_expressions();
    ctrl_flow();
    
    let x: i32 = func_return(6);
    println!("Hello, world!\nThe value of x is: {x}");
}

// Variables and Mutability
fn varmut() {
    let x = 5;
    println!("The value of x is: {}", x);

    // x = 6; // error: cannot assign twice to immutable variable `x`
    // println!("The value of x is: {}", x);
   
    // To make a variable mutable, we must add mut in front of the variable name.
    let mut y = 5;
    println!("The value of y is: {}", y);

    y = 6;
    println!("The value of y is: {}", y);

    // Constants
    // Constants aren’t just immutable by default—they’re always immutable.
    // You declare constants using the const keyword instead of the let keyword, and the type of the value must be annotated.
    // Write in uppercase with underscores between words, and underscores can be inserted in numeric literals to improve readability.

    const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;
    println!("The constant value of THREE_HOURS_IN_SECONDS is: {}", THREE_HOURS_IN_SECONDS);

    // Shadowing
    // We can declare a new variable with the same name as a previous variable, and the new variable shadows the previous variable.
    // Shadowing is different from marking a variable as mut, because we’ll get a compile-time error if we accidentally try to reassign to this variable without using the let keyword.
    // By using let, we can perform a few transformations on a value but have the variable be immutable after those transformations have been completed.
    // The other difference between mut and shadowing is that because we’re effectively creating a new variable when we use the let keyword again, we can change the type of the value but reuse the same name.

    let z = 5;
    let z = z + 1;

    {
        let z = z * 2;
        println!("The value of z in the inner scope is: {}", z);
    }

    println!("The value of z in the outer scope is: {}", z);


    let spaces = "   ";
    let spaces = spaces.len();
    println!("The value of spaces is: {}", spaces);

    // If we try to use mut for this, as shown here, we’ll get a compile-time error:
    // let mut spaces = "   ";
    // spaces = spaces.len(); // error[E0308]: mismatched types
    // println!("The value of spaces is: {}", spaces);
    //
    // The error says we’re not allowed to mutate a variable’s type 
    
}   

fn datatypes() {
    // Keep in mind that Rust is a statically typed language, which means that it must know the types of all variables at compile time.
    // The compiler can usually infer what type we want to use based on the value and how we use it. 
    // In cases when many types are possible, such as when converting a String to a number, we must add a type annotation.

    let guess: u32 = "42".parse().expect("Not a number!");
    println!("The value of guess is: {}", guess);

    // ============================================
    // Scalar Types
    // A scalar type represents a single value. Rust has four primary scalar types: integers, floating-point numbers, Booleans, and characters.
    //
    // Integers
    // An integer is a number without a fractional component.
    // Signed and unsigned refer to whether it’s possible for the number to be negative or positive—in other words, whether the number needs to have a sign with it (signed) or whether it will only ever be positive and can therefore be represented without a sign (unsigned).
    //
    // Table 3-1: Integer Types
    // Length  Signed  Unsigned
    // 8-bit   i8      u8
    // 16-bit  i16     u16
    // 32-bit  i32     u32
    // 64-bit  i64     u64
    // 128-bit i128    u128
    // arch    isize   usize
    //
    // The isize and usize types depend on the kind of computer your program is running on: 64 bits if you’re on a 64-bit architecture and 32 bits if you’re on a 32-bit architecture.
    // The primary situation in which you’d use isize or usize is when indexing some sort of collection.
    //
    // Integer Literals
    // Table 3-2: Number literals
    // Number literals  Example
    // Decimal          98_222
    // Hex              0xff
    // Octal            0o77
    // Binary           0b1111_0000
    // Byte (u8 only)   b'A'
    // 
    // Floating-Point Types
    // Rust’s floating-point types are f32 and f64, which are 32 bits and 64 bits in size, respectively.
    // The default type is f64 because on modern CPUs it’s roughly the same speed as f32 but is capable of more precision.
    // f32 is a single-precision float, and f64 has double precision.
    // let x = 2.0; // f64
    // let y: f32 = 3.0; // f32
    // 
    // Numeric Operations
    // +, -, *, /, and % available
    //
    // Boolean Type
    // The Boolean type in Rust is bool. The values are true and false.
    // Booleans are one byte in size.
    // let t = true;
    // let f: bool = false; // with explicit type annotation
    //
    // Character Type
    // Rust’s char type is four bytes in size and represents a Unicode Scalar Value, which means it can represent a lot more than just ASCII.
    // Accented letters; Chinese, Japanese, and Korean characters; emoji; and zero-width spaces are all valid char values in Rust.
    // let c = 'z'; let heart_eyed_cat = '😻';
    //
    // ============================================
    // Compound Types
    //
    // Tuple Type
    // A tuple is a general way of grouping together a number of values with a variety of types into one compound type.
    // Tuples have a fixed length: once declared, they cannot grow or shrink in size.
    // We create a tuple by writing a comma-separated list of values inside parentheses.
    let tup: (i32, f64, u8) = (500, 6.4, 1);
    // We can use pattern matching to destructure a tuple value, like this:
    let (x, y, z) = tup;
    println!("The value of x, y, z are: {x}, {y}, {z}");
    // In addition to destructuring through pattern matching, we can access a tuple element directly by using a period (.) followed by the index of the value we want to access.
    let five_hundred = tup.0;
    let six_point_four = tup.1;
    let one = tup.2;
    println!("The value of five_hundred, six_point_four, one are: {five_hundred}, {six_point_four}, {one}");

    // Array Type
    // Another way to have a collection of multiple values is with an array.
    // Unlike a tuple, every element of an array must have the same type.
    // Arrays in Rust are different from arrays in some other languages because arrays in Rust have a fixed length, like tuples.
    // let a = [1, 2, 3, 4, 5];
    // We would write an array’s type by using square brackets, and within the brackets include the type of each element, a semicolon, and then the number of elements in the array, like so:
    let a: [i32; 5] = [1, 2, 3, 4, 5];
    println!("The value of a is: {a:?}");
    // If we want to create an array that contains the same value for each element, we can specify the initial value, followed by a semicolon, and then the length of the array in square brackets, as shown here:
    // let a = [3; 5]; // let a = [3, 3, 3, 3, 3];
    // let months = ["January", "February", "March", "April", "May", "June", "July",
    //               "August", "September", "October", "November", "December"];
    //
    // Accessing Array Elements
    // We can access an array element using indexing, like this:
    let first = a[0];
    let second = a[1];
    println!("The value of first, second are: {first}, {second}");

    // Invalid Array Element Access
    // If we try to access or assign an element using indexing that is outside the bounds of the array, Rust will prevent the compile from completing successfully.
    // let a = [1, 2, 3, 4, 5];
    // let index = 10;
    // let element = a[index];
    // println!("The value of element is: {}", element);
    // This program will compile, but it will produce a warning:
    // warning: index out of bounds: the len is 5 but the index is 10

}

// Function Parameters
fn func_params(value: i32, label: char) {
    println!("The value of value, label are: {value}, {label}");
}

// Function Bodies Contain Statements and Expressions
// Statements are instructions that perform some action and do not return a value.
// Expressions evaluate to a resulting value.
// let y = 6; is a statement
// y + 1 is an expression that evaluates to 7
// Expressions do not include ending semicolons. If you add a semicolon to the end of an expression, you turn it into a statement, which will then not return a value.
// let x = (let y = 6); // error: expected expression, found statement (`let`)
// let x = 5; is an expression that evaluates to 5
// let y = { let x = 3; x + 1 }; is an expression that evaluates to 4
fn func_expressions() {
    let x = 5;
    let y = {
        let x = 3;
        x + 1
    };
    println!("The value of x, y are: {x}, {y}");
}

// Functions with Return Values
// We don’t name return values, but we do declare their type after an arrow (->).
// In Rust, the return value of the function is synonymous with the value of the final expression in the block of the body of a function.
// You can return early from a function by using the return keyword and specifying a value, but most functions return the last expression implicitly.
fn func_return(x: i32) -> i32 {
    // no semicolon here
    // The definition of the function plus_one says that it will return an i32, but statements don’t evaluate to a value, which is expressed by (), the unit type. Therefore, nothing is returned.
    x + 1
}

// Control Flow
fn ctrl_flow() {
    let number: i32 = 3; 

    // if Expressions
    // The condition must be a bool.
    if number < 5 {
        println!("condition was true");
    } else {
        println!("condition was false");
    }

    // Using if in a let Statement
    // Because if is an expression, we can use it on the right side of a let statement.
    // The if and else arms have value types that are incompatible: () and i32. 
    // That’s not allowed, because if must evaluate to a value that is the same for both of its arms.
    let number = if number == 5 { 5 } else { 6 };
    println!("The value of number is: {}", number);
    // The value of number is: 6 
    
    // Repetition with Loops 
    // Rust has three kinds of loops: loop, while, and for.
    //
    // Repeating Code with loop
    // Rust also provides a way to break out of a loop from inside the loop; for example, to stop a loop from repeating after it has accomplished its goal.
    // We can return a value from a loop by adding the value after the break expression.
    // The value will be returned out of the loop so we can use it.
    let mut counter = 0;
    let result = loop {
        counter += 1;
        if counter == 10 {
            // Returning Values from Loops 
            break counter * 2;
        }
    };

    println!("The value of result is: {}", result);
    // The value of result is: 20

    // Loop Labels to Disambiguate Between Nested Loops
    // We can add labels to the break statements in order to specify which loop we want to break.
    // The syntax for breaking from a loop looks like this:
    // 'label_name: loop
    let mut count = 0;
    // The outer loop has the label 'counting_up, and it will count up from 0 to 2. 
    'counting_up: loop {
        println!("count = {count}");
        let mut remaining = 10;

        loop {
            println!("remaining = {remaining}");
            if remaining == 9 {
                break;
            }
            if count == 2 {
                break 'counting_up;
            }

            remaining -= 1;
        }
        count += 1;
    }

    // Conditional Loops with while
    // The while loop is similar to the loop loop, except the condition goes after the while keyword at the beginning of the loop.
    // The condition must be a bool.
    // If the condition is false the first time, the code inside the loop never runs.
    // The while loop runs the code in its block over and over again as long as its condition is true.
    let mut number = 3;
    while number != 0 {
        println!("{}!", number);
        number -= 1;
    }

    println!("LIFTOFF!!!");
    
    // Looping Through a Collection with for
    // The for loop is used to loop through each item in a collection.
    // The for loop works with iterators, which are a general way of accessing a collection of items.
    // In this example, we use a range in the for loop.
    // A range is a type provided by the standard library that generates all numbers in sequence starting from one number and ending before another number.
    // Ranges are represented in Rust by two dots (..).
    // The values generated in the range are used in the for loop.
    let a = [10, 20, 30, 40, 50];
    let mut index = 0;

    while index < 5 {
        println!("the value is: {}", a[index]);
        index += 1;
    }

    for element in a.iter() {
        println!("the value is: {}", element);
    }

    for number in (1..4).rev() {
        println!("{}!", number);
    }
    println!("LIFTOFF!!!");
}
