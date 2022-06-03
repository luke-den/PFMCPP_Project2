#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++ here:
    int
    float
    bool
    double
    char
    unsigned int
 
 


2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an examploe   this.
 
10) click the [run] buttn Clear up ay errors as best as you can.
*/

// 2)
void variableDeclations()
{
    //example:
    int number = 2; //declaration of a vari	able named "number", that uses the primitive type 'int',  and the variable's initial value is '2'
    int myHeight = 72; 
    int howManyTrees = 8;
    int moneyEarned = 0;

    float temperature = 32.0f;
    float rotations = 2.375f;
    float exactChange = 12.86f;

    bool doorIsOpen = true;
    bool makeASound = false;
    bool activateSwitch = true;
    
    double numOfTracks = 4.0; 
    double inputsAllowed = 24.0;
    double eqModesShown = 6.0;

    unsigned int balloonsPopped = 350;
    unsigned int numOfPlanesSeen = 10;
    unsigned int horsesCompeting = 24;
    
    ignoreUnused(number, myHeight, howManyTrees, moneyEarned, temperature, rotations, exactChange, doorIsOpen, makeASound, activateSwitch, numOfTracks, inputsAllowed, eqModesShown, balloonsPopped, numOfPlanesSeen, horsesCompeting); //Passing each variable declared to the ignoreUnused() function
}

/*
Declare 10 free functions
note: this example shows the result after completing steps 3-8
*/

bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused function
    return {}; //if your function returns anything other 'void,' add 'return {};' to the end of it 
}

//1)
bool addLowPassFilter(int slopeType = 2, float cutoffFreq = 100.0f)
{
    ignoreUnused(slopeType, cutoffFreq);
    return {};
}

//2)
int estimateDistanceWalkedToday(int numOfSteps, float milesPerHour = 12.3f)
{
    ignoreUnused(numOfSteps, milesPerHour);
    return {};
}

//3)
float setInitFrequency(int sawtoothWave = 300, int squareWave = 500, int sineWave = 40)
{
    ignoreUnused(sawtoothWave, squareWave, sineWave);
    return {};
}

//4)
double alterStepLength(int beatDivision, int timeSignature, bool tempoMatching = true)
{
    ignoreUnused(beatDivision, timeSignature, tempoMatching);
    return {};
}

//5)
int openBusEffects(bool reverbOn = true, bool delayOn = false, int wetDryMix = 50)
{
    ignoreUnused(reverbOn, delayOn, wetDryMix);
    return {};
} 

//6)
void setDefaultLoopLength(int defaultMeasures, int defaultNumOfBeats)
{
    ignoreUnused(defaultMeasures, defaultNumOfBeats);
}

//7)
int displayTotalNumOfTracks(int audioTracks, int midiTracks)
{
    ignoreUnused(audioTracks, midiTracks);
    return {};
}

//8)
double inflateEquipmentBudget(float percentageOfIncome = 49.9f, int analogSynths = 4000, int programmingCourses = 10)
{
    ignoreUnused(percentageOfIncome, analogSynths, programmingCourses);
    return {};
}

//9)
int tallyHamburgersEaten(int withFries = 3, int withoutFries = 2, float withOnions = 0.5f)
{
    ignoreUnused(withFries, withoutFries, withOnions);
    return {};
}

//10)
void compileFastFoodReceipts(int mcdonalds = 3, int wendys = 2, int carlsJr = 1)
{
    ignoreUnused(mcdonalds, wendys, carlsJr);
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to igoreUnused at the end of maaddLowPassFiltero 
    auto carRented = rentACar(6, 2);
    
    auto lPFilter = addLowPassFilter();
    
    auto distWalked = estimateDistanceWalkedToday(6034);
    
    auto initFreq = setInitFrequency();
    
    auto seqSteps = alterStepLength(16, 4);
    
    auto effectsBus = openBusEffects();
   
    auto totalNumTracks = displayTotalNumOfTracks(8, 12);
    
    auto equipBudget = inflateEquipmentBudget();
    
    auto burgersEaten = tallyHamburgersEaten();
    
    
    ignoreUnused(carRented, lPFilter, distWalked, initFreq, seqSteps, effectsBus, totalNumTracks, equipBudget, burgersEaten);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
