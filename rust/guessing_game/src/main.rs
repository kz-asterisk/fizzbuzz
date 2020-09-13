use std::io;

fn main(){
    println!("Guess the nuber!");

    println!("Please input your guess.");

    let mut guess = String::new();

    io::stdin().read_line(&mut guess)
        .expect("Failed to read line"); //日本語でも問題ないよう

    println!("Your guessed: {}",guess)
}