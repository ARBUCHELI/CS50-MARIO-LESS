# CS50-MARIO-LESS (PSET1 CS50 INTRODUCTION TO COMPUTER SCIENCE HARVARD)

<strong>World 1-1</strong>
Toward the end of World 1-1 in Nintendo’s Super Mario Brothers, Mario must ascend right-aligned pyramid of blocks, a la the below.

![screenshot of Mario jumping up a right-aligned pyramid](https://lab.cs50.io/_site/3239b6b61ad1beb860bccf965c6c49f2e6984b79/mario/less/pyramid.png)

Let’s recreate that pyramid in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramid itself is also be taller than it is wide.

           #
          ##
         ###
        ####
       #####
      ######
     #######
    ########

The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramid should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

$ ./mario
Height: 8

           #
          ##
         ###
        ####
       #####
      ######
     #######
    ########

Here’s how the program might work if the user inputs 4 when prompted:

$ ./mario
Height: 4
          
          #
         ##
        ###
       ####

Here’s how the program might work if the user inputs 2 when prompted:

$ ./mario
Height: 2

         #
        ##

And here’s how the program might work if the user inputs 1 when prompted:

$ ./mario
Height: 1

         #

If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

$ ./mario

Height: -1

Height: 0

Height: 42

Height: 50

Height: 4

         #
        ##
       ###
      ####

<strong>Pseudocode</strong>

First, write in pseudocode.txt at right some pseudocode that implements this program, even if not (yet!) sure how to write it in code. There’s no one right way to write pseudocode, but short English sentences suffice. Recall how we wrote pseudocode for finding Mike Smith. Odds are your pseudocode will use (or imply using!) one or more functions, conditions, Boolean expressions, loops, and/or variables.

<strong>INSTRUCTIONS</strong>
1. Download and unzip the repository folder.
2. Open, compile and run the mario.c file in the CS50 IDE to see the project. If you want to run the project in other C compiler you should try to replace the cs50.h library for a function that implements similar functionality.  For example scanf. [scanf](https://stackoverflow.com/questions/865284/what-is-the-easiest-way-to-get-an-int-in-a-console-app)


# Author: Andrés R. Bucheli
