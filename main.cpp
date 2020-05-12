/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};



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
Thing 5) Keyboard
5 properties:
        1) Color of Keyboard
        2) Depth of Keystroke
        3) Keyboard Language (British vs US)
        4) Number of Keys
        5) Type (mechanical, wireless, corded, etc)
3 things it can do:
        1) Enter code
        2) Interface with Computer
        3) Illuminate
 */

/*
Thing 6) Screen
5 properties:
        1) Size
        2) Resolution
        3) Brightness
        4) Cost
        5) Number of Integrated Speakers
3 things it can do:
        1) Increase/decrease brightness
        2) Increase/decrease Contrast
        3) Interface with computer
 */

/*
Thing 7) Webcam
5 properties:
        1) Resolution
        2) Size (of actual webcam itself)
        3) Type of Zoom (optical vs digital)
        4) Type of noise reduction
        5) Type of focus (manual vs auto)
3 things it can do:
        1) Record Videos
        2) Record Audio
        3) Take pictures
 */

/*
Thing 8) TouchPad
5 properties:
        1) Number of fingers detected (multitouch)
        2) Movement speed
        3) Doubleclick speed
        4) Number of buttons
        5) Sensitivity
3 things it can do:
        1) Move cursor
        2) Select objects
        3) Multigesture actions
 */

/*
Thing 9) Speakers
5 properties:
        1) Number of speakers
        2) Cone Material
        3) Power Consumption
        4) Efficiency
        5) Number of Drivers (tweeter, woofer, etc) 
3 things it can do:
        1) Make sound
        2) Move driver forwards and backwards
        3) Consume electricity
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
