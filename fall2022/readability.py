from cs50 import get_string
import cs50


def main():

    s = get_string("Text: ")

    letters = count_letters(s)

    words = count_words(s)

    sentences = count_sentences(s)

    level = reading_level(sentences, words, letters)


# //counts letters using for loop with strlen if it's alphanumerical using ctype

def count_letters(s):

    letters = 0
    for i in range(len(s)):

        if s[i].isalnum():
            letters += 1

    return letters


# //a word is counted whenever a space is detected using isspace from ctype

def count_words(s):

    words = 1
    for i in range(len(s)):
        if s[i] == " ":
            words += 1
    return words


# // a sentence is counted whenever a '.' '?' or '!' is detected

def count_sentences(s):

    sentences = 0
    for i in range(len(s)):
        if s[i] == '.' or s[i] == '!' or s[i] == '?':
            sentences += 1

    return sentences


def reading_level(sentences, words, letters):

    l = (letters * 100 / words)
    s = (sentences * 100 / words)

    index = 0.0588 * l - 0.296 * s - 15.8

    level = round(index)

    if (level < 1):
    
        print("Before Grade 1")
    
    elif (level < 16):
    
        print(f"Grade {level}")
    
    elif (level >= 16):
    
        print("Grade 16+")
    

    return level

# // formula -> index = 0.0588 * L - 0.296 * S - 15.8
# // where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.
# // Recall that round is declared in math.h, per manual.cs50.io!
# // Recall that, when dividing values of type int in C, the result will also be an int, with any remainder(i.e., digits after the decimal point) discarded. Put another way, the result will be “truncated.” You might want to cast your one or more values to float before performing division when calculating L and S!
