/*
https://weber.instructure.com/courses/474387/assignments/3955879

Program flow:
    [1] Draw a card
      (Choose a number between 1 and 13, inclusive)

    [2] Convert card value into card name

      Match:
        Card value is 1, card name is "Ace"
        Card value is 2, card name is "Two"
        ...
        Card value is 10, card name is "Ten"
        Card value is 11, card name is "Jack"
        Card value is 12, card name is "Queen"
        Card value is 13, card name is "King"

    [3] User chooses higher, lower, or quit

      Match:
        1 -> higher
        2 -> lower
        3 -> quit

    [4] Exit if user chose to quit

    [5] Draw another card

    [6] Convert card value into card name

    [7] Compare the cards

      If:
        First card < second card
        First card > second card

    [8] Increment the user's score

      If:
        User was correct -> increment wins
        User was incorrec -> increment losses

    [9] Repeat from [1]

Subroutines:
    Convert card value into card name ([2], [6])
    Compare two cards ([7])
    Set score [8]
*/
