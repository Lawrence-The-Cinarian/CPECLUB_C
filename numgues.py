import random

def play_guessing_game():
    print("====================================")
    print("🎯 WELCOME TO THE NUMBER GUESSING GAME 🎯")
    print("====================================")

    # 1. Define the game range and maximum attempts
    lower_bound = 1
    upper_bound = 100
    max_attempts = 7

    # 2. Generate a random secret number
    secret_number = random.randint(lower_bound, upper_bound)
    attempts_taken = 0

    print(f"I am thinking of a number between {lower_bound} and {upper_bound}.")
    print(f"You have {max_attempts} attempts to guess it. Good luck!\n")

    # 3. Main game loop
    while attempts_taken < max_attempts:
        user_input = input(f"Attempt {attempts_taken + 1}/{max_attempts} | Enter your guess: ").strip()

        # Input validation: Ensure the user typed a valid integer
        try:
            guess = int(user_input)
        except ValueError:
            print("❌ Invalid input! Please enter a valid whole number.\n")
            continue

        attempts_taken += 1

        # 4. Check the user's guess against the secret number
        if guess == secret_number:
            print(f"🎉 Congratulations! You guessed the correct number ({secret_number}) in {attempts_taken} attempts!")
            return
        elif guess < secret_number:
            print("📉 Too low! Try a higher number.\n")
        else:
            print("📈 Too high! Try a lower number.\n")

    # If the loop finishes without breaking, the user ran out of tries
    print(f"💥 Game Over! You've run out of attempts. The secret number was {secret_number}.")

# Main execution loop to handle replay options
if __name__ == "__main__":
    while True:
        play_guessing_game()

        # Ask the player if they want to play again
        replay = input("\nDo you want to play again? (yes/no): ").strip().lower()
        if replay not in ['y', 'yes']:
            print("\nThanks for playing! Goodbye! 👋")
            break
