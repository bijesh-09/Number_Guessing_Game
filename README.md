# 🎯 Number Guessing Game (C++)

A fun and interactive console-based number guessing game written in **C++**!  
Challenge yourself to guess the correct number between **1 and 100** with smart hints after each guess.

---

## 🕹️ How It Works

1. The program randomly picks a number between **1 and 100**.
2. You try to guess it in as few attempts as possible.
3. The game gives feedback on how close your guess is:
   - **"Very close!"** → if your guess is within 5
   - **"Close!"** → if your guess is within 10
   - **"Too high!" / "Too low!"** otherwise

---

## 🧠 Features

- ✅ Uses `rand()` and `srand(time(nullptr))` for true random number generation
- ✅ Feedback hints to guide your next guess
- ✅ Tracks total number of attempts
- ✅ Beginner-friendly code with helpful comments

---

## 🛠️ How to Run

1. **Clone the repo** (if not already):
   ```bash
   git clone https://github.com/your-username/your-repo-name.git
   cd your-repo-name
2. Compile the program:
  g++ Number_Guessing_Game.cpp -o guess
3. Run the executable:
  ./guess

📁 File
| File Name                  | Description                       |
| -------------------------- | --------------------------------- |
| `Number_Guessing_Game.cpp` | Main C++ source code for the game |


🚀 Example Output
----------------------------------------
Welcome to the Number Guessing Game!
I have chosen a number between 1 and 100. Try to guess it!
----------------------------------------
Attempt-1: Enter your guess number: 
7
Too high! Try again.
----------------------------------------
Attempt-2: Enter your guess number: 
17
Close! Try again.Maybe 10 less or 10 more than 17
----------------------------------------
Attempt-3: Enter your guess number:
20
Very close! Try again.Maybe 5 less or 5 more than 20
----------------------------------------
Attempt-4: Enter your guess number:
27
Very close! Try again.Maybe 5 less or 5 more than 27
----------------------------------------
Attempt-5: Enter your guess number:
25
Congratulations! You guessed the right number in 5 attempts!
----------------------------------------

💡 Learning Concepts
This project helps you practice:

Input/Output in C++

Loops (do-while)

Random number generation (rand, srand, time)

Conditionals (if-else)

Absolute difference (abs())


📜 License
This project is open-source and free to use.
Feel free to modify, improve, and share!


🙌 Made with love by Bijesh Karanjit 💻


---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------






