#include <iostream>
int main()
{
    float score1, score2, score3;
    std::cout << "Write your three score\n: ";
    std::cin >> score1,
        std::cin >> score2,
        std::cin >> score3;

    if (score1 && score2 && score3)
    {
        float arr[3] = {score1, score2, score3};

        float total_score = score1 + score2 + score3;
        int len = sizeof(arr) / sizeof(arr[0]);
        float average = total_score / len;
        std::cout << total_score << ": total score\n";
        std::cout << average << ": average\n";
        for (float element : arr)
        {
            std::cout << average - element << ": deviation of " << element << "\n";
        }
    }
    else
    {
        std::cout << "You write it in worng way!";
    }
    return 0;
}

/* Q1)check the time.
   int seconds;
   std::cout << "Press any number: ";
   std::cin >> seconds;
   int time = 60;
   int hours = seconds / 3600;
   int minuits = (seconds - (3600*hours)) / 60;
   double second = seconds - (3600*hours) - (60*minuits);

   std::cout << seconds << ": givne seconds." << std::endl;
   std::cout << hours << ": hours." << std::endl;
   std::cout << minuits << ": minuits." << std::endl;
   std::cout << second << ": left-over seconds." << std::endl;
*/

//  Q2) average and deviation of score
