# hangman
Final project for CS 1400 @ Weber State University, by @LegendADX and @clmay

## TODO

- [X] Create a list of words in `wordlist.txt`. (Sourced from [The Vocabulary.com Top 1000](https://www.vocabulary.com/lists/52473).)
- [X] Optional: Create fancy `HANGMAN` ASCII welcome text.
- [X] Optional: Create a hangman ASCII illustration.

## Program flow

1. Setup
   1. Display welcome text.
   2. Print the menu.
      - Menu options:
         1. New game
         2. Exit
         3. Others? 
   3. Read `wordlist.txt` into memory. Should we use an array? ArrayList? Something else?
   4. Randomly select a word from the list. (Optional: if the word has already been played during a given game run, select a new word.)
2. Game loop
   1. Print the challenge string (with already-guessed letters revealed, the rest with an underline) and number of guesses remaining.
   2. Prompt the user for a letter. (Optional: Allow user to also guess the entire word.)
   3. Optional: If the user guessed the entire word correctly, they win.
   4. If the user guessed a letter, add the letter to the list of guesses, decrement the number of guesses remaining.
   5. If the user has 0 guesses remaining, they lose.
   6. If the user has uncovered the entire challenge string, they win.
   7. Otherwise, update the challenge string to reflect the new guess.
   8. Repeat.
3. Optional: After win or loss, print the definition and couple usage examples
4. After a game ends, print the menu again.