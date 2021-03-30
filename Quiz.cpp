#include <iostream>
#include <stdlib.h>
#include<windows.h>
using namespace std;

int a, b, correct = 0, incorrect = 0;
float score = 0;

void innotation(float score)
{
    if (score >= 40)
    {
        system("Color 0A");
        cout << "\nCongratulations On Scoring Big! Keep It Up." << endl;
        system("Color 07");
        cout << "\nYour Number Of Correct Answers Are : " << correct << endl;
        system("Color 07");
        cout << "\nYour Number Of Incorrect Answers Are : " << incorrect << endl;
        system("Color 07");
        cout << "\nYour Score Is : " << score << endl;
    }
    else if (score >= 20 && score < 40)
    {
        system("Color 06");
        cout << "\nGood On Scoring! Keep Trying To Practice More." << endl;
        system("Color 07");
        cout << "\nYour Number Of Correct Answers Are : " << correct << endl;
        system("Color 07");
        cout << "\nYour Number Of Incorrect Answers Are : " << incorrect << endl;
        system("Color 07");
        cout << "\nYour Score Is : " << score << endl;
    }
    else
    {
        system("Color 04");
        cout << "\nOh! So Low Score! You Need To Parctice More." << endl;
        system("Color 07");
        cout << "\nYour Number Of Correct Answers Are : " << correct << endl;
        system("Color 07");
        cout << "\nYour Number Of Incorrect Answers Are : " << incorrect << endl;
        system("Color 07");
        cout << "\nYour Score Is : " << score << endl;
    }
}

int main()
{
    cout << "\nWelcome To All In One Quiz Game" << endl;
    cout << "For Every Question You Will Be Given 10 Marks And 5 Marks Will Be Deducted For Each Wrong Answer Given." << endl;
    cout << "\nPLEASE SELECT THE TOPIC ON WHICH YOU WANT TO PLAY QUIZ : " << endl;
    cout << "1. SPORTS\n2. TECHNOLOGY\n3. ENTERTAINMENT" << endl;
    cin >> a;
    if (a == 1)
    {
        cout << "You Have Chosen Sports Section For The Quiz!" << endl;
        cout << "(a.) In Which Year India Played It's First Test Match?" << endl;
        cout << "1. 1923\n2. 1943\n3. 1931\n4. 1932" << endl;
        cin >> b;
        if (b == 4)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(b.) Which Is The National Sport Of India?" << endl;
        cout << "1. Hockey\n2. Football\n3. Cricket\n4. None Of The Above" << endl;
        cin >> b;
        if (b == 4)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(c.) Who bagged the title of the 2018 Women’s World Chess Champion?" << endl;
        cout << "1. Kateryna Lagno\n2. Bob Arum\n3. Ju Wenjun\n4. Hou Yifan" << endl;
        cin >> b;
        if (b == 3)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(d.) Who was given the Best Player title in the 2018 FIFA World Cup?" << endl;
        cout << "1. Kylian Mbappe\n2. Pierre de Coubertin\n3. Thibaut Courtbois\n4. Luka Modric" << endl;
        cin >> b;
        if (b == 4)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(e.) Who among the following was not in the team which had won a Gold medal at the second 2018 ISSF Junior World Cup in 10m air rifle team event for women?" << endl;
        cout << "1. Elavenil Valarivan\n2. Muskan Muskan\n3. Zeena Khitta\n4. Manu Bhaker" << endl;
        cin >> b;
        if (b == 2)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
    }
    else if (a == 2)
    {
        cout << "You Have Chosen Technology Section For The Quiz!" << endl;
        cout << "(a.) With Which Company, Azure Is Associated?" << endl;
        cout << "1. Apple\n2. Microsoft\n3. Google\n4. Cisco" << endl;
        cin >> b;
        if (b == 2)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(b.) Who invented flexible photographic film?" << endl;
        cout << "1. George Eastman\n2. Linda Eastman\n3. Albert Einstein\n4. Thomas Alva Edison" << endl;
        cin >> b;
        if (b == 1)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(c.) To which of these devices is the cellular telephone most closely related?" << endl;
        cout << "1. Mobile Phone\n2. Telescope\n3. Telegraph\n4. Radio" << endl;
        cin >> b;
        if (b == 4)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(d.) Software that can control access and use of computer system is" << endl;
        cout << "1. Software piracy\n2. System security monitor\n3. Fault tolerant\n4. Data Mining System" << endl;
        cin >> b;
        if (b == 2)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(e.) Ultra DMA transfers data through which controller?" << endl;
        cout << "1. SCSI\n2. PCI\n3. ATA\n4. USB" << endl;
        cin >> b;
        if (b == 3)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
    }
    else if (a == 3)
    {
        cout << "You Have Chosen Entertainment Section For The Quiz!" << endl;
        cout << "(a.) Which country has won the most Eurovision Song Contests?" << endl;
        cout << "1. England\n2. France\n3. Ireland\n4. Germany" << endl;
        cin >> b;
        if (b == 3)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(b.) What is Elton John’s real name?" << endl;
        cout << "1. George Eastman\n2. Felix Mendelssohn\n3. George Harrison\n4. Reginald Dwight" << endl;
        cin >> b;
        if (b == 4)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(c.) Which Movie Surpassed Avatar As Most Viewed Movie?" << endl;
        cout << "1. Avengers\n2. Imitation Game\n3. Pursuit Of Happiness\n4. Avengers:Endgame" << endl;
        cin >> b;
        if (b == 4)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(d.) The Imitation Game Movie Is Based On ?" << endl;
        cout << "1. Allan Turing\n2. Albert Einstein\n3. Charles Babbage\n4. Leonardo Da Vinci" << endl;
        cin >> b;
        if (b == 1)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
        cout << "(e.) Who Was Involved In Scam Of 1992 In Indian Share Markets?" << endl;
        cout << "1. Harshad Mehta\n2. Abdul Rahman Qadri\n3. Dev Mistry\n4. Vimal Sharma" << endl;
        cin >> b;
        if (b == 1)
        {
            score = score + 10.0;
            correct = correct + 1;
        }
        else
        {
            score = score - 5.0;
            incorrect = incorrect + 1;
        }
    }
    else
    {
        cout << "You Chose Wrong Choice. Try Choosing From 1,2 or 3" << endl;
    }
    innotation(score);
    return 0;
}
