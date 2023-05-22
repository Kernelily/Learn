// Import Libraries
use rand::Rng; // Import Rng Trait from rand Crate
use std::cmp::Ordering;
use std::io;

// Entry Point; main
fn main() {
    println!("Guess the number!");

    let secret_number = rand::thread_rng().gen_range(1..=100);

    loop {
        println!("Please input your guess.");

        // Mutable Variable
        // In Rust, Variables are immutable by default
        // The :: syntax in the ::new line indicates that new is an associated function of the String type.
        // An associated function is implemented on a type, in this case String, rather than on a particular instance of a String.
        let mut guess = String::new();

        // We’re also passing &mut guess as the argument to read_line to tell it what string to store the user input in.
        // The & indicates that this argument is a reference, which gives you a way to let multiple parts of your code access one piece of data without needing to copy that data into memory multiple times.
        // You need to write &mut guess rather than &guess to make it mutable.
        io::stdin()
            .read_line(&mut guess)
            // Handling Potential Failure with Result
            // The Result types are enumerations, often referred to as enums.
            // An enumeration is a type that can have a fixed set of values, and those values are called the enum’s variants.
            // For Result, the variants are Ok or Err.
            // The Ok variant indicates the operation was successful, and inside Ok is the successfully generated value.
            // The Err variant means the operation failed, and Err contains information about how or why the operation failed.
            // The purpose of these Result types is to encode error-handling information.
            .expect("Failed to read line");

        // Shadowing
        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        // Placeholder Syntax; {varName}
        println!("You guessed: {guess}");

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("You win!");
                break;
            } 
        }
    }
}
