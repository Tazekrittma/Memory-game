# Memory Game
A C program to create a simple memory game. The game involves matching pairs of numbers that are hidden behind cards. The program uses functions to generate the game board, fill the board with numbers, shuffle the numbers, allow the user to make guesses and compare the guesses.

## Getting Started
Prerequisites
You should have a C compiler installed on your machine.
Installing
Clone the project or download the source code.
Compile the source code using a C compiler.
Running the Program
Run the compiled program.
How to Play
When the program is run, it will ask you to choose the difficulty level of the game. There are four levels to choose from: easy, medium, hard and extreme.

The program will then generate a game board with pairs of numbers hidden behind cards. The numbers are shuffled randomly and the user must match the pairs by selecting two cards at a time. The user must enter the coordinates of the two cards they wish to select.

If the numbers on the cards match, the cards will remain open and the user will be prompted to select another pair of cards. If the numbers on the cards do not match, the cards will be hidden again and the user will be prompted to select another pair of cards.

The game ends when all pairs have been matched. The user will be shown their score, which is the number of pairs they have successfully matched.

Functions
The program uses the following functions:

avoirtaille: asks the user to choose the difficulty level and returns the size of the game board.
remplirtableau: fills an array with numbers from 1 to the size of the game board.
melangertableau: shuffles the numbers in the array randomly.
affichertableau: displays the contents of an array.
remplirtableau2d: fills a two-dimensional array with numbers from the shuffled array.
creerdespaires: creates pairs of numbers in the shuffled array.
affichertable2d: displays the contents of a two-dimensional array.
comparerlesvaleur: compares the numbers on two cards selected by the user and returns the number of pairs matched.
melangertableaufaux: hides the cards again after a failed attempt to match a pair.
Author
The original author of this program is unknown.
