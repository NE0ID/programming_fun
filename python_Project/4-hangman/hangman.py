#!/usr/bin/python3

# simple hangman game

import random
import string
from words import words

def get_valid_word(words):
    word = random.choice(words)
    while '-' in word or ' ' in word:
        word = random.choice(words)
    return word

def hangman():
    word = get_valid_word(words)
    word_letters = set(word) #letter in the word
    alphabet = set(string.ascii_uppercase)
    used_letters = set()
    
    while len(word_letters) > 0:
        #letters used
        print('You have used these letters: ', ' '.join(used_letters))
        word_list = "_" * len(word)
        for letter in used_letters:
            if letter in word:
                print("here")
        print('Current word : ', ' '.join(word_list))
        user_letter = input("Guess a letter : ").upper()
        if user_letter in alphabet - used_letters:
            used_letters.add(user_letter)
            if user_letter in word_letters:
                word_letters.remove(user_letter)

        elif user_letter in used_letters:
            print("You already used this character. Try again.")

        else:
            print("Invalid character. Choose only letters.")

hangman()