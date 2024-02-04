Connect-4 Game Description:
Objective: The goal of Connect-4 is to connect four of your own discs (either 'A' or 'B') in a row, either horizontally, vertically, or diagonally on a 7x6 grid.
Players: The game is designed for two players, where one player uses 'A' discs, and the other uses 'B' discs.
Gameplay:
Players take turns placing their discs into one of the seven columns.
The disc will fall to the lowest available position within the selected column.
The game ends when one player successfully connects four of their discs in a row or when the game grid is fully occupied.
Toss: The game starts with a toss to determine which player goes first.
Winning Condition: The player who first connects four discs in a row (horizontally, vertically, or diagonally) wins the game.
Draw: If the entire grid is filled, and no player has connected four discs, the game is declared a draw.
Code Overview:
Starting Animation: The code begins with an animated starting sequence displaying the game title.
Game Modes:
Players can choose to play the game (option 1), view credits (option 2), or read the rules (option 3).
The game loop continues until the user chooses to exit (option 0).
Game Functions:
LetItStart(): Displays an animated starting sequence.
game_type(): Allows the user to select the game mode (play or back).
toss(): Simulates a coin toss to determine the starting player.
player(int n): Manages player turns and alternates between players 'A' and 'B.'
play_game(int choice): Implements the Connect-4 game logic, including player turns, disc placement, and checking for a winner or draw.
Winning Check:
The check function checks for a winning condition by examining horizontally, vertically, and diagonally for four consecutive discs of the same type.
Other Functions:
credit(): Displays credits for the game development.
rules(): Provides rules and instructions for playing Connect-4.
Usage:
Run the program.
Choose the desired option (play, credits, rules).
If playing, follow the prompts to make moves and see the game outcome.
Please note that this description assumes the correctness of the provided code snippets and their intended functionality.
