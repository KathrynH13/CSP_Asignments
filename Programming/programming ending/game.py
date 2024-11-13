#When game starts a random word is generated-Kathryn(function)


print("Welcome to Brainrot Hangman!")
import random
wordcheck =""
win=0
things_left = 6


def game():
   global things_left


   global guessuedLetters
   global choseWord
   print("a new word was chosen")
   #then a hangman board is printed on the screen-kahtryn(VARIABLE)
   print("  ___________") 
   print("  |")
   print("  |")
   print("  |")
   print("  |")
   print("  |")
   print("_____________")
#the slots for the word will apper-kathryn(CONDITIONAL)
words = ["fanum tax", "sigmas", "bussin", "skibidi", "big back", "rizz"]
print("this are the words you can guess from", words)
word = game
guessuedLetters = []
choseWord = random.choice(words)
wordcheck = ""
def things():
   global things_left


   global guessuedLetters
   global choseWord
   print("a new word was chose")
  
   guessuedLetters = []
   choseWord = random.choice(words)
   wordcheck = ""
   things_left = 6
   things()
def restart():
   answer = input("Restart (y/n):")
   if answer == "y":
       restart()
   elif answer == "n":
       exit()
   restart()

#sawyers code
correctLetter = ["i", "d", "r", "n", "a", "l", "s", "b", "c", "k", "f", "t", "m", "z", "u"]
notLetter = ["e", "h", "j", "o", "p", "y", "w", "q"]
guess = 6
theGuess = input("guess a letter: ")

#back to kathryns

blank = ""
for letter in words:
   blank += "_"
blank_list = list(blank)
print(''. join(blank.list))

if theGuess == correctLetter:
 print(correctLetter in blank)
elif theGuess == notLetter:
 print(notLetter)
update_display = 0
 

#the player has to guess a letter-sawyer(LOOP)
correctLetter = ["i", "d", "r", "n", "a", "l", "s", "b", "c", "k", "f", "t", "m", "z", "u"]
notLetter = ["e", "h", "j", "o", "p", "y", "w", "q"]
guess = 6
for correctLetter in words:
  theGuess = input("guess a letter: ")


#if its correct the letter will print and they will play again-sawyer(CONDITONAL)
  if theGuess in choseWord:  
     print("this is right")
#its wrong then its a x will print on the screen and they have to guess again-sawyer(CONDITONAL))(a function will be added)


  else:
      print("x\n", "this is incorrect try again")
#if player 1 gets it wrong six times they die - jayda(CONDITIONALS)
if guess<= 6:
   print("you have used up all your guess\n")
#if the player gets it all right they win - jayda(VARIABLE)(Add a function)
wordGuess = input("final guess is to guess a word:")
if wordGuess == choseWord:
  print("you have won the game")
else:
  print("you got it wrong")
answer = input("Restart (y/n):")
#a play agian option is printed on the screen- jayda(VARIABLE)
if answer == "y":
  print("rerun to replay")
else:
  print("please leave")

