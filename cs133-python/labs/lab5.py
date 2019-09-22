def piggify(word):
    """convert an english word to pig-latin"""
    
    # create list of vowels
    vowels = ['a', 'e', 'i', 'o', 'u']
    
    # find first vowel in word
    for i in range(len(word)):
        if word[i] in vowels:
            break
            
    # uncomment following line to test
    # return i
    
    # chop off everything before it (onset), move onset to end of word
        # onset = slice of letters up to index of first vowel    
        # piggle = slice of letters from index of first vowel onwards + onset
    
    piggle = word[i:] + word[0:i]
    
    # uncomment following line to test
    # return piggle
    
    # add "ay" to end of word
    piggle = piggle + "ay"
    
    # return the new word
    return piggle

to_convert = str(input("Which word would you like to convert into pig-latin? "))
output = piggify(to_convert)

print("In pig-latin, you would translate " + "\"" + to_convert + "\"" + " to " + "\"" + output + "\".")
