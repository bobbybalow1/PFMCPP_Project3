/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.
*/
/*
1)Song
5 properties:
    1) Name of Song
    2) Artist Name
    3) Genre
    4) Description of Song
    5) Song Length
3 things it can do:
    1) Provide access to the song
    2) Delete Song Data
    3) Replace Song Data
 */

/*
2) FX Filters
5 properties:
    1) Lo-Fi Filter
    2) "AutoTune" Effect
    3) DeNoise Filter
    4) Dry/Wet Control
    5) Bypass Filter Control
3 things it can do:
    1) Remove high/low frequencies and add distortion to audio
    2) Apply Pitch Correction Algo to Vocal File
    3) Apply multi-band expander to vocal vocal track
 */

/*
3) Record Audio Activity Screen (for Android App)
5 properties:
    1) Song Playback Button
    2) Song Stop Button
    3) Record Button
    4) Undo Record Button
    5) Back Button
3 things it can do:
    1) Record Audio To Disk
    2) Play Recorded Audio
    3) Seek Song by Touch
 */

/*
4) Success/Song Rendering Activity (for Android App)
5 properties:
    1) Save Song to Phone Storage Button
    2) Send Song Via Email Button
    3) Share Song to Social Button
    4) Make Another Song Button
    5) Advertisement
3 things it can do:
    1) Attach Song To Email
    2) Connect to Facebook API
    3) Display Ad from Google AdMob
 */

/*
Thing 10) Laptop Computer
5 properties:
    1) Keyboard
    2) Screen
    3) Webcam
    4) TouchPad
    5) Speakers
3 things it can do:
    1) Run an application
    2) Send an email
    3) Play music
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
