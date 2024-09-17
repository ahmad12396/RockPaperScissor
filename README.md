Rock-Paper-Scissors Game
This is a console-based implementation of the Rock-Paper-Scissors game in C++. The game allows for two modes of play:

1 Player vs 1 Player: Two human players compete against each other.
1 Player vs Computer: A human player competes against a computer opponent with randomly generated moves.
Description
The Rock-Paper-Scissors game is a classic hand game often used as a simple decision-making tool. The game is played with the following rules:

Rock crushes Scissors
Scissors cut Paper
Paper covers Rock
In this implementation:

1 Player vs 1 Player mode allows two players to input their choices, and the winner is determined based on the rules above.
1 Player vs Computer mode lets a single player compete against the computer. The computer's choice is generated randomly, and the result is displayed accordingly.
The game also provides options to restart, return to the menu, or exit after each round.

Features
Interactive Console Interface: Provides a simple and clear interface for user interaction.
Random Computer Moves: The computer's choices are generated randomly to ensure varied gameplay.
Choice Display: Shows the choice of each player and the computer in a readable format.
Winner Determination: Accurately determines the winner based on standard Rock-Paper-Scissors rules.
Requirements
C++ compiler (e.g., g++, clang++)
C++11 or later
![WhatsApp Image 2024-09-16 at 11 24 51_19d23d62](https://github.com/user-attachments/assets/76346ebf-90d8-4e80-b94f-aa1f74bd3838)

![WhatsApp Image 2024-09-16 at 11 28 42_0ad7b875](https://github.com/user-attachments/assets/901483dd-7f93-4dbd-b2d7-438371c9a027)

Code Overview
main(): Entry point of the game. Handles the menu, user input, and game flow.
getuserchoice(): Prompts the user to input their choice (Rock, Paper, or Scissors).
getcomputerchoice(): Generates a random choice for the computer.
showchoice(char choice): Displays the choice (Rock, Paper, or Scissors) based on the input character.
choosewinner(char player, char computer): Determines the winner between the player and the computer.
chooseWinner(char player1, char player2, string name1, string name2): Determines the winner between two players in a 1 vs 1 game.
Notes
The game clears the screen after each round to maintain a clean interface.
Use system("cls") for Windows or system("clear") for Unix-based systems to clear the screen.
License
This project is licensed under the MIT License. See the LICENSE file for details.
Contributions are welcome! If you have suggestions or improvements, please submit a pull request or open an issue.

Contact For any questions or feedback, you can reach me at ahmedmghafeer@gmail.com.




