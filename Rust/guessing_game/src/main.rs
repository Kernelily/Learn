use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main() {
    println!("Guess The Number!");

    let snum = rand::thread_rng().gen_range(1..=100);

    println!("The Secret Number = {snum}\nPlease Input Your Guess.");

    let mut guess = String::new();

    io::stdin()
        .read_line(&mut guess)
        .expect("Failed to read line");

    let guess :u32 = guess.trim().parse().expect("Please Type a Number!!");
    println!("You Guessed : {guess}");
    
    match guess.cmp(&snum) {
        Ordering::Less => println!("Smaller!"),
        Ordering::Equal => println!("You Win!"),
        Ordering::Greater => println!("Bigger!"),
    }
}
